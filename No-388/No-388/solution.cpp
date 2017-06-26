//
//  solution.cpp
//  No-388
//
//  Created by 刘谦 on 6/25/17.
//  Copyright © 2017 qianliu. All rights reserved.
//

#include "solution.hpp"

int Solution::lengthLongestPath(string& input){
    //initialize
    int maxi=0,count=0,ln=1;
    bool isFile=false;
    vector<int> level(200);
    level[0]=0;
    int fin= (int) input.size();
    
    for(int i=0;i<fin;++i){
        //find which level
        while(input[i]=='\t'){
            ++ln;++i;
        }
        //read file name
        while(input[i]!='\n'&&i<fin){
            if(input[i]=='.')isFile=true;
            ++count;++i;
        }
        //calculate
        if(isFile){
            maxi=max(maxi,level[ln-1]+count);
        }
        else{
            level[ln]=level[ln-1]+count+1;// 1 means '/'
        }
        //reset
        count=0;ln=1;isFile=false;
    }
    return maxi;
};
