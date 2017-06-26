//
//  main.cpp
//  No-388
//
//  Created by 刘谦 on 6/25/17.
//  Copyright © 2017 qianliu. All rights reserved.
//


#include <iostream>
#include "solution.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sol;
    string s = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext";
    int ans = sol.lengthLongestPath(s);
    
    std::cout << ans <<endl;
    return 0;
}
