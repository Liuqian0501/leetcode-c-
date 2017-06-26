//
//  main.cpp
//  No-340
//
//  Created by 刘谦 on 6/25/17.
//  Copyright © 2017 qianliu. All rights reserved.
//


#include "solution.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sol;
    string s = "abcabcabc";
    int res = sol.lengthOfLongestSubstringKDistinct(s, 3 );
    
    cout<<"res ="<<res<<endl;
    
    return 0;
}
