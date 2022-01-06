# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_ex07.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 20:09:13 by idcornua          #+#    #+#              #
#    Updated: 2019/01/15 16:29:49 by idcornua         ###   ########.fr        #
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

echo "${ORNG}===================== EX07 =====================\n"
echo "" > error_log
echo "${BLUE}-- Compilation --${NC}\n"
echo "$> gcc -o user_exe ${FLAGS} m_ex07.c ft_putchar.c ft_print_combn.c"

gcc -o ${U_EX} ${FLAGS} m_ex07.c ../common/ft_putchar.c ~/${J_PATH}/ex07/ft_print_combn.c 2> error_log
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

for i in `seq 1 9`;
do
	echo "${BLUE}-- Test 0${i} --${NC}\n"
	echo "$> ./J02_ex07_exe ${i} > m_output"
	echo "$> ./${U_EX} ${i} > u_output"
	echo "\n$>diff -U 10 u_output m_output > m_diff\n"

    ./J02_ex07_exe $i > m_output
	./${U_EX} $i > u_output

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
if [ "$SCORE_MOULI" == "7" ]
then
	echo `expr $SCORE_MOULI + 1` > score_moulinette
fi
