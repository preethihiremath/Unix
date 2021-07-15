#!/bin/bash

STR='GNU/Linux is an operating system'
SUB='Linux'

case $STR in

*"$SUB"*)
echo -n "It's there."
;;
Esac