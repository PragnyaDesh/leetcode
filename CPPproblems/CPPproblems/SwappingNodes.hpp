//
//  SwappingNodes.hpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 28/03/21.
//

#ifndef SwappingNodes_hpp
#define SwappingNodes_hpp

#include <stdio.h>

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* swapNodes(ListNode* head, int k);

#endif /* SwappingNodes_hpp */
