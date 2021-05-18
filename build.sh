#!/bin/bash
path_home_cgi=/usr/lib/cgi-bin/
for program in `ls ./programs/*.c`
do
bin=${program##*/}
bin=${bin%.c}
bin=$path_home_cgi$bin".cgi"
gcc `mysql_config --cflags` -I./include $program `mysql_config --libs` -o $bin
done