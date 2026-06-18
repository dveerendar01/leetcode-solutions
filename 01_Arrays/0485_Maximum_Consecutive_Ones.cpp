#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int answ=0;

        for(int num:nums) {
            if(num==1) {
                count++;
                answ=max(answ, count);
            } else {
                count = 0;
            }
        }
        return answ;
    }
};