#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answ(n, 1);
        for(int i=1; i<n; i++) {
            answ[i]=answ[i-1]*nums[i-1];
        }
        int right=1;

        for(int i=n-1; i>=0; i--) {
            answ[i]*=right;
            right*=nums[i];
        }
        return answ;
    }
};