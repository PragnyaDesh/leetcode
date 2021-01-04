//
//  PalindromeNumber.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 04/01/21.
//

#include "PalindromeNumber.hpp"
class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        int newx = x;
        int rev = 0;
        while(newx>0) {
            int temp = newx%10;
            rev = rev*10 + temp;
            newx = newx/10;
        }
        
        if(rev == x)
            return true;
        return false;
    }
}
