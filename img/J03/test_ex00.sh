# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_ex00.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 23:20:09 by idcornua          #+#    #+#              #
#    Updated: 2019/01/15 17:42:55 by idcornua         ###   ########.fr        #
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

echo "${ORNG}===================== EX00 =====================\n"
echo "" > error_log
echo "${BLUE}-- Compilation --${NC}\n"
echo "$> gcc -o user_exe ${FLAGS} m_ex00.c ft_ft.c"

gcc -o ${U_EX} ${FLAGS} m_ex00.c ../common/ft_putchar.c ../common/ft_putnbr.c ~/${J_PATH}/ex00/ft_ft.c 2> error_log
ERROR=`cat error_log`
if [ "${ERROR}" != "" ]
then
	echo "${ERROR}"
	echo "\n====> ${RED}FAILURE${NC} <===="
	echo "Does not compile.\n"
	exit
else
	echo "\n====> ${GREEN}SUCCESS${NC} <===="
	echo "Compilation OK.\n"
fi

echo "${BLUE}-- Test 01 --${NC}\n"
echo "$> ./J03_ex00_exe > m_output"
echo "$> ./${U_EX} > u_output"
echo "\n$>diff -U 3 u_output m_output > m_diff\n"

./J03_ex00_exe > m_output
./${U_EX} > u_output

diff -U 3 u_output m_output > m_diff
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
if [ "$SCORE_MOULI" == "0" ]
then
	echo `expr $SCORE_MOULI + 1` > score_moulinette
fi
