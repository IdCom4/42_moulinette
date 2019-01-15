# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Moulinator_J02.sh                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idcornua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 16:58:45 by idcornua          #+#    #+#              #
#    Updated: 2019/01/15 16:32:18 by idcornua         ###   ########.fr        #
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

clear && echo "\n${YELL}=====================| MOULINATOR LAUNCHED |=====================\n\n"

echo "0" > score_total
echo "0" > score_moulinette

sh test_ex00.sh
sh test_ex01.sh
sh test_ex02.sh
sh test_ex03.sh
sh test_ex04.sh
sh test_ex05.sh
sh test_ex06.sh
sh test_ex07.sh

echo "\n${ORNG}===================== BILAN =====================${NC}\n"

SCORE_TOTAL=`cat score_total`
SCORE_MOULI=`cat score_moulinette`
echo "${BLUE}$SCORE_TOTAL / 8 succeeded exercices"
echo "${BLUE}$SCORE_MOULI / 8 final score for the Moulinette"
echo "(100 * $SCORE_MOULI) / 8" | bc > score_moulinette
SCORE_MOULI=`cat score_moulinette`
echo "(without priorities consideration, $SCORE_MOULI/100)"

echo "\n${YELL}=====================| MOULINATOR, OVER |=====================\n\n"
