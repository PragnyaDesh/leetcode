//
//  IntegerToRoman.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 04/01/21.
//

#include "IntegerToRoman.hpp"
class Solution {
public:
    string intToRoman(int num) {
        string romanNum;
        int temp = num;
        
        while (temp > 0) {
            
            if(temp >= 1000)     {
                temp = temp - 1000;
                romanNum.append("M");
            }
            else if(temp >= 500) {
                if(temp>=900) {
                    temp = temp - 900;
                    romanNum.append("CM");
                } else {
                temp = temp - 500;
                romanNum.append("D");
              }
            }
            else if(temp >= 100) {
                if(temp>=400) {
                    temp = temp - 400;
                    romanNum.append("CD");
                } else {
                temp = temp - 100;
                romanNum.append("C");
              }
            }
            else if(temp >= 50)  {
                if(temp>=90) {
                    temp = temp - 90;
                    romanNum.append("XC");
                } else {
                temp = temp - 50;
                romanNum.append("L");
              }
            }
            else if(temp >= 10)  {
                if(temp>=40) {
                    temp = temp - 40;
                    romanNum.append("XL");
                } else {
                temp = temp - 10;
                romanNum.append("X");
              }
            }
            else if(temp >= 5)   {
                if(temp>=9) {
                    temp = temp - 9;
                    romanNum.append("IX");
                } else {
                temp = temp - 5;
                romanNum.append("V");
               }
            }
            else if(temp >= 1)   {
                if(temp==4) {
                    temp = temp - 4;
                    romanNum.append("IV");
                } else {
                temp = temp - 1;
                romanNum.append("I");
              }
            }
        }
        return romanNum;
    }
};
