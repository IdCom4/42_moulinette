# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_ex00.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 23:20:09 by idcornua          #+#    #+#              #
#    Updated: 2019/02/06 11:12:39 by idcornua         ###   ########.fr        #
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
J="08"
E="02"
S="2"
EX="ft_boolean.h"
COM=""
EVEN_MSG="I have an even number of arguments."
ODD_MSG="I have an odd number of arguments."

echo "${ORNG}===================== EX${E} =====================\n"
echo "" > error_log
echo "${BLUE}-- Checking ${EX} --${NC}\n"

cp ~/${J_PATH}/ex${E}/${EX} ./ 2> error_log
gcc ${FLAGS} -o ${U_EX} m_ex${E}.c 2>> error_log
rm ${EX}
ERROR=`cat error_log`
if [ "${ERROR}" != "" ]
then
	echo "${ERROR}"
	echo "\n====> ${RED}FAILURE${NC} <===="
	echo "Fail.\n"
	exit
else
	echo "\n====> ${GREEN}SUCCESS${NC} <===="
	echo "Ok :D.\n"
fi

for i in `seq 1 5`;
do
	echo "${BLUE}-- Test 0${i} --${NC}\n"
	if [ "$i" == "1" ];then
		echo "$> ./${U_EX} \"1\" > u_output"
		echo "\n$>diff -U 10 u_output m_output > m_diff\n"
		./${U_EX} 1 > u_output
		echo ${ODD_MSG} > m_output
	fi
	if [ "$i" == "2" ];then
		echo "$> ./${U_EX} \"1\" \"2\" > u_output"
		echo "\n$>diff -U 10 u_output m_output > m_diff\n"
		./${U_EX} 1 2 > u_output
		echo ${EVEN_MSG} > m_output
	fi
	if [ "$i" == "3" ];then
		echo "$> ./${U_EX} \"1\" \"2\" \"3\" > u_output"
		echo "\n$>diff -U 10 u_output m_output > m_diff\n"
		./${U_EX} 1 2 3 > u_output
		echo ${ODD_MSG} > m_output
	fi
	if [ "$i" == "4" ];then
		echo "$> ./${U_EX} \"1\" \"2\" \"3\" \"4\" > u_output"
		echo "\n$>diff -U 10 u_output m_output > m_diff\n"
		./${U_EX} 1 2 3 4 > u_output
		echo ${EVEN_MSG} > m_output
	fi
	if [ "$i" == "5" ];then
		echo "$> ./${U_EX} \"1\" \"2\" \"3\" \"4\" \"5\" > u_output"
		echo "\n$>diff -U 10 u_output m_output > m_diff\n"
		./${U_EX} 1 2 3 4 5 > u_output
		echo ${ODD_MSG} > m_output
	fi
	diff -U 10 u_output m_output > m_diff
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
done
SCORE_TOTAL=`cat score_total`
echo `expr $SCORE_TOTAL + 1` > score_total
SCORE_MOULI=`cat score_moulinette`
if [ "$SCORE_MOULI" == "${S}" ]
then
	echo `expr $SCORE_MOULI + 1` > score_moulinette
fi
