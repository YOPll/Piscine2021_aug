#!/bin/sh 
ifconfig  | grep -w "ether" | cut -d ' ' -f2 | sed 's/ //g' 
