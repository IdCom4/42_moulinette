# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_ex00.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 23:20:09 by idcornua          #+#    #+#              #
#    Updated: 2019/01/16 16:12:18 by idcornua         ###   ########.fr        #
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
J="05"
E="06"
S="6"
EX="ft_strcmp.c"
COM=""

echo "${ORNG}===================== EX${E} =====================\n"
echo "" > error_log
echo "${BLUE}-- Compilation --${NC}\n"
echo "$> gcc -o user_exe ${FLAGS} m_ex${E}.c ${EX}"

gcc -o ${U_EX} ${FLAGS} m_ex${E}.c ${COM} ~/${J_PATH}/ex${E}/${EX} 2> error_log
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

for i in `seq 1 9`;
do
	echo "${BLUE}-- Test 0${i} --${NC}\n"
	TEST=""
	TEST2=""
	if [ "$i" == "1" ];then
		TEST=""
		TEST2=""
	fi
	if [ "$i" == "2" ];then
		TEST="H3lLo\teVerY0n3, Wh4t'5         up ?"
		TEST2="H3lLo\teVerY0n3, Wh4t'5         up ?"
	fi
	if [ "$i" == "3" ];then
		TEST="\t\n\c\r\t"
		TEST2="\t\n\c\r\t"
	fi
	if [ "$i" == "4" ];then
		TEST="012345678901234567890123456789012345678"
		TEST="0123"
	fi
	if [ "$i" == "5" ];then
		TEST="H3lLo\teVerY0n3, Wh4t'5         up ?"
		TEST2="H3lLo\teVerY0n3, Wh4t'5         up "
	fi
	if [ "$i" == "6" ];then
		TEST="H3lLo\teVerY0n3, Wh4t'5         up ?"
		TEST2="H3lLo\teVerY0n3, Wh4t'5        up ?"
	fi
	if [ "$i" == "7" ];then
		TEST="loulou ille ehy loulou louille hye loulouille hey"
		TEST2="loulou ille ehy loulou louille hye loulouille heg"
	fi
	if [ "$i" == "8" ];then
		TEST="loulou ille ehy loulou louille hye loulouille hey"
		TEST2=""
	fi	
	if [ "$i" == "9" ];then
		TEST=""
		TEST2=""
	fi

	echo "$> ./J${J}_ex${E}_exe \"${TEST}\" \"${TEST2}\" > m_output"
	echo "$> ./${U_EX} \"${TEST}\" \"${TEST2}\" > u_output"
	echo "\n$>diff -U 10 u_output m_output > m_diff\n"

    ./J${J}_ex${E}_exe "${TEST}" "${TEST2}" > m_output
	./${U_EX} "${TEST}" "${TEST2}" > u_output

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
