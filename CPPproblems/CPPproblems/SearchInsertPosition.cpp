//
//  SearchInsertPosition.cpp
//  CPPproblems
//
//  Created by Pragnya Deshpande on 07/01/21.
//

#include "SearchInsertPosition.hpp"

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       if(target<nums[0])
           return 0;
       for(int i=0; i<nums.size(); i++){
           if(nums[i]>=target)
               return i;
           else if(i==nums.size()-1)
               return nums.size();
       }
        return 0;
    }
};
