//
//  main.cpp
//  P344
//
//  Created by 刘谦 on 6/26/17.
//  Copyright © 2017 qianliu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string ret;
        for(int i = s.size()-1; i >= 0; --i)
            ret += s[i];
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sol;
    string s = "Hello";
    string res = sol.reverseString(s);
    std::cout << res;
    return 0;
}
