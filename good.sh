#!/bin/bash
clear
        echo "Menu "
        echo "1. Lower to Upper"
        echo "2. Upper to lower "
        echo "3. Quit"
        echo "Enter ur Choice \c"
        read Choice
        case"$Choice"in
           1) echo "Enter File: \c"
              read f1
              if [ -f $f1 ]
          then
               echo "Converting Lower Case to Upper Case "
                 tr '[a-z]''[A-Z]' <$f1
                             
              else
                     echo "$f1 does not exist"
              fi
              ;;
          2) echo "Enter the File :\c"
             read f1
             if [ -f $f1 ]
             then      
               echo "Converting Upper case to Lower Case to "
             tr '[A-Z]''[a-z]' <$f1
                          
             else 
                  echo "$f1 file does not exist "
             fi
             ;;
         3|*) 
             echo "Exit......."
             exit;;
        esac
