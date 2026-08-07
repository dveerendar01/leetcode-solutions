#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answ;

        int i=0;
        int j=n;

        while(i < n) {
            answ.push_back(nums[i]);
            answ.push_back(nums[j]);

            i++;
            j++;
        }
        return answ;
    }
};