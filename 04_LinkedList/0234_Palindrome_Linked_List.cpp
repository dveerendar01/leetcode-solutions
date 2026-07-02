#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;

    ListNode(int x) {
        value = x;
        next = nullptr;
    }
};

class Solution {
    public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast=fast->next->next;
        }
        ListNode* prev = nullptr;
        ListNode* current = slow;

        while(current != nullptr) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        ListNode* left = head;
        ListNode* right = prev;

        while(right != nullptr) {
            if(left->value != right->value) {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;
    }
};