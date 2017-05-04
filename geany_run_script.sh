#!/bin/sh

rm $0

"./Dark_Hypersquare_v0-32"

echo "

------------------
(program exited with code: $?)" 		


echo "Press return to continue"
#to be more compatible with shells like dash
dummy_var=""
read dummy_var
