//
// Created by sai srinivas lakkakula on 7/13/21.
//

#include "LC_13_Roman_To_Integer.h"
int romanToInt(string s){
    int integerValue=0;
   // stack<char> roman_stack;
   //roman_stack.push('d'); //pushing dummy to make stack not empty

    for(int i=0;i<s.length();i++) {
        switch (s.at(i)) {
            case 'I':
            {
                if(s[i+1] == 'V'){
                    integerValue = integerValue + 4;
                    i++;
                }

                else if( s[i+1] == 'X'){
                    integerValue = integerValue + 9;
                    i++;
                }
                else
                    integerValue++;
                break;
            }
            case 'X': {
                if(s[i+1] == 'L'){
                    integerValue = integerValue + 40;
                    i++;
                }

                else if( s[i+1] == 'C'){
                    integerValue = integerValue + 90;
                    i++;
                }
                else
                    integerValue = integerValue+10;
                break;
            }

            case 'C': {
                if(s[i+1] == 'D'){
                    integerValue = integerValue + 400;
                    i++;
                }

                else if( s[i+1] == 'M'){
                    integerValue = integerValue + 900;
                    i++;
                }
                else
                    integerValue = integerValue+100;
                break;
            }
            case 'V':
            {
                integerValue = integerValue+5;
                break;
            }
            case 'L': {
                integerValue = integerValue+50;
                break;
            }
            case 'D': {
                integerValue = integerValue+500;
                break;
            }
            case 'M': {
                    integerValue = integerValue +1000;
                break;
            }

        }
    }
    return integerValue;
}
