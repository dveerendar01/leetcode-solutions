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

    int checkHeight(TreeNode* root) {
        if(root == nullptr) return 0;

        int leftHeight = checkHeight(root->left);
        if(leftHeight == -1) return -1;

        int rightHeight = checkHeight(root->right);
        if(rightHeight == -1) return -1;

        if(abs(leftHeight - rightHeight)>1) return -1;

        return 1+max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        if (checkHeight(root) == -1) return false;
        return true;
    }
};

// TC: O(N), where n is the number of nodes in the tree. Each node is visited once.
// SC: O(H), where H is the height of the tree