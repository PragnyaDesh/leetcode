//
//  AddTwoNumbers.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 04/01/21.
//

#include "AddTwoNumbers.hpp"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //creates a new node and adds an extra pointer to l1 and l2 each so we can           traverse through the list;
        ListNode* ans = new ListNode;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int sum, carry=0, digit;
        int flag = 1;
        //adds up the digits and appends it to the list using the append function
        while(true){
            if(flag<=0)
                flag = 0;
            //If both lists reach NULL, end the loop
            if(curr1 == NULL && curr2 == NULL)
                break;
            else{
            //If curr1 is NULL, append 0 and continue
            if(curr1 == NULL){
                curr1 = append(curr1, 0+carry, flag);
                carry = 0;
                }
            //If curr2 is NULL, append 0 and continue
            else if(curr2 ==NULL){
                curr2 = append(curr2, 0+carry, flag);
                carry = 0;
                }
            }
            sum = (curr1->val+curr2->val)+carry;
            digit = (sum%10);
            carry = sum/10;
            
            ans = append(ans, digit, flag);
            
            curr1 = curr1->next;
                        curr2 = curr2->next;
                        flag--;
                    }
                    
                    //If any carry in the end, appends it to the list
                    if(carry>0)
                        ans = append(ans, 1, flag);
                    
                    return ans;
                }
                
            //Function to append digits to the list
            public:
                ListNode* append(ListNode* ans, int dig, int flag) {
                    ListNode* new_node = new ListNode;
                    new_node->val = dig;
                    new_node->next = NULL;
                    
                    ListNode* curr = ans;
                    
                    if(flag == 1 || ans == NULL){
                        ans = new_node;
                        return ans;
                    }
                    while(curr->next != NULL)
                        curr = curr->next;
                    curr->next = new_node;
                    
                    return ans;
                }
};
