# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_ex08.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 23:45:05 by idcornua          #+#    #+#              #
#    Updated: 2019/01/15 17:44:35 by idcornua         ###   ########.fr        #
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

echo "${ORNG}===================== EX08 =====================\n"
echo "" > error_log
echo "${BLUE}-- Compilation --${NC}\n"
echo "$> gcc -o user_exe ${FLAGS} m_ex08.c ft_atoi.c"

gcc -o ${U_EX} ${FLAGS} m_ex08.c ../common/ft_putchar.c ../common/ft_putnbr.c ../common/ft_putstr.c ~/${J_PATH}/ex08/ft_atoi.c 2> error_log
ERROR=`cat error_log`
if [ "${ERROR}" != "" ]
then
	echo "\n====> ${RED}FAILURE${NC} <===="
	echo "Does not compile.\n"
	exit
else
	echo "\n====> ${GREEN}SUCCESS${NC} <===="
	echo "Compilation OK.\n"
fi

for i in `seq 1 16`;
do
	echo "${BLUE}-- Test ${i} --${NC}\n"
	TEST=""
	if [ "$i" == "1" ];then
		TEST=""
	fi
	if [ "$i" == "2" ];then
		TEST="	
		     18hi guys"
	fi
	if [ "$i" == "3" ];then
		TEST="q	
		   18hi guys"
	fi
	if [ "$i" == "4" ];then
		TEST="	
		       ++18hi guys"
	fi
	if [ "$i" == "5" ];then
		TEST="	
		       --18hi guys"
	fi
	if [ "$i" == "6" ];then
		TEST="H3lLo     eVerY0n3, Wh4t'5         up ?"
	fi
	if [ "$i" == "7" ];then
		TEST="	
		       +-18hi guys"
	fi
	if [ "$i" == "8" ];then
		TEST="	
		       -0 guys"
	fi
	if [ "$i" == "9" ];then
		TEST="	
		       -107 guys"
	fi
	if [ "$i" == "10" ];then
		TEST="	
		       +781 guys"
	fi
	if [ "$i" == "11" ];then
		TEST="	
		       -2147483648 guys"
	fi
	if [ "$i" == "12" ];then
		TEST="	
		       2147483647 guys"
	fi
	if [ "$i" == "13" ];then
		TEST="2"
	fi
	if [ "$i" == "14" ];then
		TEST="-2"
	fi
	if [ "$i" == "15" ];then
		TEST="+2"
	fi
	if [ "$i" == "16" ];then
		TEST="+2k6"
	fi
	echo "$> ./J03_ex08_exe \"${TEST}\" > m_output"
	echo "$> ./${U_EX} \"${TEST}\" > u_output"
	echo "\n$>diff -U 10 u_output m_output > m_diff\n"

    ./J03_ex08_exe "${TEST}" > m_output
	./${U_EX} "${TEST}" > u_output

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
if [ "$SCORE_MOULI" == "8" ]
then
	echo `expr $SCORE_MOULI + 1` > score_moulinette
fi
