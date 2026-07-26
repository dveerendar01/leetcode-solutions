#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPalindrome(string &word) {
        int right = word.size() - 1;
        int left =0;

        while(left < right) {
            if(word[left] != word[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string &word : words) {
            if(isPalindrome(word)) {
                return word;
            }
        }
        return "";
    }
};