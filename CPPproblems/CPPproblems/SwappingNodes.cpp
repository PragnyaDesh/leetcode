//
//  SwappingNodes.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 28/03/21.
//

#include "SwappingNodes.hpp"
 
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;
        ListNode *curr = head;
        
        while(curr->next != nullptr){
            curr = curr->next;
            length++;
        }
        length++;
        
        if(k==1 || k==length){
            int temp = head->val;
            head->val = curr->val;
            curr->val = temp;
            
            return head;
        }
        
        ListNode *n1 = head;
        ListNode *n2 = head;
        
        for(int i=1; i<k; i++)
            n1 = n1->next;
        
        for(int i=1; i<(length-k+1); i++)
            n2 = n2->next;
        
        int temp = n1->val;
        n1->val = n2->val;
        n2->val = temp;
        
        return head;
    }
};
