#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mySet;
        for(int num : nums) {
            mySet.insert(num);
        }
        int longest = 0;
        for(int num : mySet) {
            if(mySet.find(num - 1) == mySet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while(mySet.find(currentNum + 1) != mySet.end()) {
                    currentNum++;
                    currentStreak++;
                }
                longest = max(longest, currentStreak);
            }
        }
        return longest;
    }
};