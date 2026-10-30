#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string temp = doubled.substr(1, doubled.size() - 2);
        return temp.find(s) != string::npos;
    }
};

// TC: O(n) 
// SC: O(n) for concatenated string and temporary substring