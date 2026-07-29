#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answ = "";
        int i=0;
        int j=0;

        while(i<word1.size() && j<word2.size()) {
            answ += word1[i];
            answ += word2[j];

            i++;
            j++;
        }
        while(i<word1.size()) {
            answ += word1[i];
            i++;
        }
        while(j<word2.size()) {
            answ += word2[j];
            j++;
        }
        return answ;
    }
};