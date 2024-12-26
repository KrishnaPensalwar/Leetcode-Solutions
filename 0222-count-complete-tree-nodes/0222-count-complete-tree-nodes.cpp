/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int leftdepth(TreeNode *root){
        int depth=0;

        while(root!=nullptr){
            root = root->left;
            depth++;
        }

        return depth;
    }
    int rightdepth(TreeNode *root){
        int depth=0;

        while(root!=nullptr){
            root = root->right;
            depth++;
        }

        return depth;
    }



    int countNodes(TreeNode* root) {

        if(root == nullptr)return 0;

        int left = leftdepth(root);
        int right = rightdepth(root);

        if(left == right)return pow(2,left)-1;

        else return 1 + countNodes(root->left) + countNodes(root->right);   
    }
};