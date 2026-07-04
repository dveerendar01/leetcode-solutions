#include<bits/stdc++.h>
using namespace std;

class MinStack {
private:

    vector<int> stackVector;
    vector<int> minVector;


public:

    MinStack() {
        
    }
    

    void push(int val) {

        stackVector.push_back(val);


        if(minVector.empty()){

            minVector.push_back(val);

        }
        else{

            minVector.push_back(
                min(val, minVector.back())
            );

        }
    }
    

    void pop() {

        stackVector.pop_back();

        minVector.pop_back();
    }
    

    int top() {

        return stackVector.back();
    }
    

    int getMin() {

        return minVector.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 =class MinStack {
private:
    vector<int> stackVector;
    vector<int> minVector;

public:
    MinStack() {     
    }
    
    void push(int value) {
        stackVector.push_back(value);
        if(minVector.empty()) {
            minVector.push_back(value);
        } else {
            minVector.push_back(
                min(value, minVector.back())
            );
        }
    }
    
    void pop() {
        stackVector.pop_back();
        minVector.pop_back();
    }
    
    int top() {
        return stackVector.back();
    }
    
    int getMin() {
        return minVector.back();
    } obj->getMin();
 */