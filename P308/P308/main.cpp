//
//  main.cpp
//  P308
//
//  Created by 刘谦 on 6/26/17.
//  Copyright © 2017 qianliu. All rights reserved.
//


#include "solution.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<vector<int>> v = {{{3,0,1,4,2},{5,6,3,2,1},{1,2,0,1,5},{4,1,0,1,7},{1,0,3,0,5}}};
    
    NumMatrix numMaxtrix(v);
    
    numMaxtrix.update(0, 1, 2);
    
    int res = numMaxtrix.sumRegion(0, 0, 2, 2);
    std::cout << res;
    return 0;
}
