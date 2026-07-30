#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> answ(2 * n);
        for(int i=0; i<n; i++) {
            answ[i] = nums[i];
            answ[i+n] = nums[i];
        }
        return answ;
    }
};