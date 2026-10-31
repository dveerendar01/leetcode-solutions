#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:

    int ans;
    int prev;
    bool hasPrev;

    void inorder(TreeNode* root) {

        if (root == nullptr) return;
        inorder(root->left);
        if (hasPrev) {
            ans = min(ans, root->val - prev);
        }

        prev = root->val;
        hasPrev = true;
        inorder(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        ans = INT_MAX;
        prev = 0;
        hasPrev = false;
        inorder(root);
        return ans;
    }
};