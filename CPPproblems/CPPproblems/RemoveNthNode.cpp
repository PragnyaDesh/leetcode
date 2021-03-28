//
//  RemoveNthNode.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 28/03/21.
//

#include "RemoveNthNode.hpp"


// Definition for singly-linked list.

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode *curr = head;
        while(curr != nullptr){
            curr = curr->next;
            length++;
        }
        curr = head;
        
        if(length == n){
            head = head->next;
            delete curr;
            return head;
        }
        
        ListNode *prev = nullptr;
        for(int i=1; i<(length-n+1); i++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
};
