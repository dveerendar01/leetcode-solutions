#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0;
        for(char ch : word) {
            if(isupper(ch)) {
                capitalCount++;
            }
        }
        if(capitalCount == word.length()) {
            return true;
        } else if(capitalCount == 0) {
            return true;
        } else if(capitalCount == 1 && isupper(word[0])) {
            return true;
        }
        return false;
    }
};