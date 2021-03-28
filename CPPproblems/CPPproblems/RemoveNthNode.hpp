//
//  RemoveNthNode.hpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 28/03/21.
//

#ifndef RemoveNthNode_hpp
#define RemoveNthNode_hpp

#include <stdio.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeNthFromEnd(ListNode* head, int n);

#endif /* RemoveNthNode_hpp */
