//
//  solution.cpp
//  P308
//
//  Created by 刘谦 on 6/26/17.
//  Copyright © 2017 qianliu. All rights reserved.
//

#include "solution.hpp"

NumMatrix :: NumMatrix(vector<vector<int>>& matrix){
    
    row_M = (int) matrix.size();
    if(row_M == 0) col_M = 0;
    else col_M = (int) matrix[0].size();
    
    vector<vector<int>> _matrix (row_M , vector<int>( col_M+1 , 0));
    sum_matrix = _matrix;
    for(int i = 0; i< row_M; ++i){
        for(int j = 0; j < col_M; ++j){
            sum_matrix[i][j+1] = sum_matrix[i][j] + matrix[i][j];
        }
    }
}

void NumMatrix :: update(int row, int col, int val){
    int diff = val - (sum_matrix[row][col+1] - sum_matrix[row][col]);
    
    for(int j = col; j < col_M; j++ ){
        sum_matrix[row][j+1] += diff;
    }
};

int NumMatrix :: sumRegion(int row1, int col1, int row2, int col2){
    int sum = 0;
    for(int i = row1; i <= row2; ++i){
        sum += (sum_matrix[i][col2+1] - sum_matrix[i][col1]);
    }
    return sum;
};
