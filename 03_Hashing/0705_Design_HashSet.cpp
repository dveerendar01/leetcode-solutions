#include <bits/stdc++.h>
using namespace std;

class MyHashSet {
public:
    vector<bool> hash;

    MyHashSet() {
        hash.resize(1000001, false);
    }

    void add(int key) {
        hash[key] = true;
    }

    void remove(int key) {
        hash[key] = false;
    }

    bool contains(int key) {
        return hash[key];
    }
};

// Time Complexity: O(1) per add(), remove(), and contains() operation.
// Space Complexity: O(10^6), because you allocate a Boolean vector of 1,000,001 elements.