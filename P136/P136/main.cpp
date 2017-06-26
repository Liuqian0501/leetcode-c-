//
//  main.cpp
//  P136
//
//  Created by 刘谦 on 6/26/17.
//  Copyright © 2017 qianliu. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i) nums[0] ^= nums[i];
        
        return nums[0];
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> nums = {1,1,2,2,3,4,4,5,5};
    Solution sol;
    int a = sol.singleNumber(nums);
    std::cout << a;
    return 0;
}
