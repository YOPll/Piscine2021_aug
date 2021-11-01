#!/bin/sh
cat /etc/passwd | sed -n '/#.*/d ; n;p' | cut -d ':' -f1 | rev | sort -r  | sed -n "$FT_LINE1,$FT_LINE2 p" | sed 's/$/, /g' | tr -d '\n' | sed 's/..$/./' | tr -d '\n'
