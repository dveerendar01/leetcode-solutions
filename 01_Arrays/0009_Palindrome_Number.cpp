#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    int num = x;
    long long rev = 0;
    if(x < 0) return false;
    while(x > 0) {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    if(num == rev) return true;
    else return false;
}

// TC: O(log(n))
// SC: O(1)