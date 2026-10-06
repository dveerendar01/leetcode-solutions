#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int freq[26] = {0};
        if(s.size() != t.size()) {
            return false;
        }
        for(int i=0; i<n; i++) {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0; i<26; i++) {
            if(freq[i] != 0) return false;
        }
        return true;
    }
};

// TC:O(n)
// SC:O(1)