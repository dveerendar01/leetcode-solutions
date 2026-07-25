#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> answ;
        for(int i=0; i<nums.size(); i++) {
            answ.push_back(nums[nums[i]]);
        }
        return answ;
    }
};