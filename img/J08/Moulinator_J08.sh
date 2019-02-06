# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Moulinator_J03.sh                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 22:22:12 by idcornua          #+#    #+#              #
#    Updated: 2019/01/24 18:15:51 by idcornua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
YELL='\033[1;33m'
ORNG='\033[0;33m'
BLUE='\033[1;34m'
NC='\033[0m'
L_RED='\033[1;31m'
CYAN='\033[0;36m'
L_CYAN='\033[1;36m'

U_EX='user_exe'
FLAGS='-Wall -Wextra -Werror'
NBR_E=6

clear && echo "\n${YELL}=====================| MOULINATOR LAUNCHED |=====================\n\n"

echo "0" > score_total
echo "0" > score_moulinette

for i in `seq 0 $NBR_E`;
do
	if test $i -ge 10;then
		sh test_ex${i}.sh
	else
		sh test_ex0${i}.sh
	fi
done
E_F=`expr $NBR_E + 1`
echo "\n${ORNG}===================== BILAN =====================${NC}\n"

SCORE_TOTAL=`cat score_total`
SCORE_MOULI=`cat score_moulinette`
echo "${BLUE}$SCORE_TOTAL / ${E_F} succeeded exercices"
echo "${BLUE}$SCORE_MOULI / ${E_F} final score for the Moulinette"
echo "(100 * $SCORE_MOULI) / ${E_F}" | bc > score_moulinette
SCORE_MOULI=`cat score_moulinette`
echo "(without priorities consideration, $SCORE_MOULI/100)"

echo "\n${YELL}=====================| MOULINATOR, OVER |=====================\n\n"
