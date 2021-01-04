//
//  BinaryToInt.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 04/01/21.
//

#include "BinaryToInt.hpp"
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* curr1 = head;
        int length=0;
        while(curr1->next != NULL) {
            length++;
            curr1 = curr1->next;
        }
        int ans=0;
        ListNode* curr2 = head;
        
        while(length>=0) {
            ans = ans + (curr2->val*pow(2, length));
            length--;
            curr2 = curr2->next;
        }
        return ans;
    }
};
