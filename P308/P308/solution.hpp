//
//  solution.hpp
//  P308
//
//  Created by 刘谦 on 6/26/17.
//  Copyright © 2017 qianliu. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix);
    void update(int row, int col, int val);
    int sumRegion(int row1, int col1, int row2, int col2);
    
private:
    vector<vector<int>> sum_matrix;
    int row_M;
    int col_M;
};


#endif /* solution_hpp */
