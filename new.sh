#!/bin/bash

echo "program $0: "
grep "$1" $2
echo $? "Exit status"
echo "pid" $$
ls & echo "PID of ls = $!"
