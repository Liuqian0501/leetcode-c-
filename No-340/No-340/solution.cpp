//
//  solution.cpp
//  No-340
//
//  Created by 刘谦 on 6/25/17.
//  Copyright © 2017 qianliu. All rights reserved.
//

#include "solution.hpp"

int Solution::lengthOfLongestSubstringKDistinct(string& s, int k){
    /*
        using two printers (p1 and p2) : represent index
        using char map(charMap) : store distince char number
        using couter for distince char(char_couter).
        return res for maximum length.
     */
    int len = (int) s.length();
    int p1 = 0, p2 = 0;
    int char_couter = 0, res = 0;
    
    if (k == 0) return 0;
    
    vector<int> charMap (128, 0);
    
    
    while(p2 < len){
        
        //move p2 util char_couter = k;
        while(p2 < len){
            //case1 char_couter will be k+1
            if(char_couter == k && charMap[s[p2]] == 0){
                break;
            }
            //case2 char_couter will be < k+1
            else{
                if(charMap[s[p2]]==0){
                    char_couter++;
                }
                charMap[s[p2]]++;
                p2++;
            }
            
        }

        int temp = p2 - p1;
        res = res > temp ? res : temp;

        //move p1 util char_couter = k-1;
        while(p1 < p2){
            charMap[s[p1]]--;
            p1++;
            if(charMap[s[p1-1]] == 0){
                char_couter--;
                break;
            }
        }

    }
    
    return res;
};

