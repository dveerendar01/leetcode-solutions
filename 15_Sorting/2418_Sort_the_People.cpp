#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for(int i=0; i<names.size(); i++) {
            people.push_back({heights[i],
            names[i]});
        }
        sort(people.begin(), people.end(), greater<pair<int, string>>());
        vector<string> answer;
        for(auto &person : people) {
            answer.push_back(person.second);
        }
        return answer;
    }
};