# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_ex00.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 23:20:09 by idcornua          #+#    #+#              #
#    Updated: 2019/01/19 16:23:59 by idcornua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
YELL='\033[1;33m'
ORNG='\033[0;33m'
BLUE='\033[1;34m'
NC='\033[0m'

U_EX='user_exe'
FLAGS='-Wall -Wextra -Werror'
J_PATH=`cat path`
J="06"
E="00"
S="0"
EX="libft.a"
COM=""

echo "${ORNG}===================== EX${E} =====================\n"
echo "" > error_log
printf "" > m_output
printf "" > u_output
rm -rf libft/*
echo "${BLUE}-- Compilation --${NC}\n"
echo "$> test_required_files"

gcc -o ${U_EX} ${FLAGS} m_ex${E}.c ~/${J_PATH}/ex${E}/ft_putchar.c ~/${J_PATH}/ex${E}/ft_putstr.c ~/${J_PATH}/ex${E}/ft_strlen.c ~/${J_PATH}/ex${E}/ft_strcmp.c ~/${J_PATH}/ex${E}/ft_swap.c 2> error_log
ERROR=`cat error_log`
if [ "${ERROR}" != "" ]
then
	echo "${ERROR}"
	echo "\n====> ${RED}FAILURE${NC} <===="
	echo "Does not compile or missing files.\n"
	exit
else
	echo "\n====> ${GREEN}SUCCESS${NC} <===="
	echo "All required files present and compile.\n"
fi

echo "${BLUE}-- Test 01 --${NC}\n"

echo "$> sh libft_creator.sh 2> error_log"

C_FILES=`ls ~/${J_PATH}/ex${E}/*.c | rev | cut -f 1 -d '/' | rev`
printf "\n${C_FILES}\n"
cp ~/${J_PATH}/ex${E}/*.c ./libft
cd libft
sh ~/${J_PATH}/ex${E}/libft_creator.sh 2> ../error_log
rm *.c *.o
cd ..
ERROR=`cat error_log`
if [ "${ERROR}" != "" ]
then
	echo "${ERROR}"
	echo "\n====> ${RED}FAILURE${NC} <===="
	echo "sh libft_creator.sh failed.\n"
	exit
else
	echo "\n====> ${GREEN}SUCCESS${NC} <===="
	echo "libft.a created.\n"
fi

echo "${BLUE}-- Test 02 --${NC}\n"

echo "$> gcc -o ${U_EX} m_ex${E}.c ${EX}"

gcc -o ${U_EX} ${FLAGS} m_ex${E}.c libft/${EX} 2> m_diff

echo "$> ./J${J}_ex${E}_exe > m_output"
echo "$> ./${U_EX} > u_output"

./J${J}_ex${E}_exe > m_output
./${U_EX} > u_output

diff -U 10 u_output m_output >> m_diff
M_DIFF=`cat m_diff`

if [ "${M_DIFF}" != "" ]
then
	echo "${M_DIFF}"
	echo "\n====> ${RED}FAILURE${NC} <===="
	echo "Diff KO :(\n"
	exit
else
	echo "\n====> ${GREEN}SUCCESS${NC} <===="
	echo "Diff OK :D\n"
fi

SCORE_TOTAL=`cat score_total`
echo `expr $SCORE_TOTAL + 1` > score_total
SCORE_MOULI=`cat score_moulinette`
if [ "$SCORE_MOULI" == "${S}" ]
then
	echo "mou +1"
	echo `expr $SCORE_MOULI + 1` > score_moulinette
fi
