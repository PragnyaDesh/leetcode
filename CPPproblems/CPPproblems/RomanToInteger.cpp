//
//  RomanToInteger.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 06/01/21.
//

#include "RomanToInteger.hpp"

class Solution {
public: int romanToInt(string s) {
        int number=0;
        int l = s.length();
        char roman[l+1];
        strcpy(roman, s.c_str());
        for(int i=0; i<l; i++) {
            int temp = 0;
            if(i<(l-1)) {
            if(roman[i] == 'I' && roman[i+1] == 'V')
            { number = number+4;
             i=i+1;
             temp=1;}
            else if(roman[i] == 'I' && roman[i+1] == 'X')
            { number = number+9;
             i=i+1;
             temp=1;}
            else if(roman[i] == 'X' && roman[i+1] == 'L')
            { number = number+40;
             i=i+1;
             temp=1;}
            else if(roman[i] == 'X' && roman[i+1] == 'C')
            { number = number+90;
             i=i+1;
             temp=1;}
            else if(roman[i] == 'C' && roman[i+1] == 'D')
            { number = number+400;
             i=i+1;
             temp=1;}
            else if(roman[i] == 'C' && roman[i+1] == 'M')
            { number = number+900;
             i=i+1;
             temp=1;}
            }
            
            if(temp==1)
            {continue;}
            
            else if(roman[i] == 'I')
                number = number+1;
            else if(roman[i] == 'V')
                number = number+5;
            else if(roman[i] == 'X')
                number = number+10;
            else if(roman[i] == 'L')
                number = number+50;
            else if(roman[i] == 'C')
                number = number+100;
            else if(roman[i] == 'D')
                number = number+500;
            else if(roman[i] == 'M')
                number = number+1000;
        }
        return number;
    }
};
