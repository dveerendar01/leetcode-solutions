#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while(n != 0) {
            n = n & (n-1);
            cnt++;
        }
        return cnt;
    }
};

// Time Complexity: O(K), where K is the number of set bits
// Space Complexity: O(1)