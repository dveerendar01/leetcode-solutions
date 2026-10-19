#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
    public:

    bool isMirror(TreeNode* left, TreeNode* right) {
        if(left == nullptr && right == nullptr) return true;
        if(left == nullptr || right == nullptr) return false;
        if(left->val != right->val) return false;

        bool outer = isMirror(left->left, right->right);
        bool inner = isMirror(left->right, right->left);

        return outer && inner;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return isMirror(root->left, root->right);
    }
};

// TC: O(N)
// SC: O(H) where H is the height of the tree