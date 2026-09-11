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
    void traverse(TreeNode* root,int& total,int& denominator){
        if(root==NULL)return;
        total+=root->val;
        denominator+=1;
        traverse(root->left,total,denominator);
        traverse(root->right,total,denominator);
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)return 0;
        int total=0;
        int denominator=0;
        int ans=0;
        traverse(root,total,denominator);
        if (total / denominator == root->val) {
            ans++;
        }
        ans+=averageOfSubtree(root->left);
        ans+=averageOfSubtree(root->right);
        
        return ans;
    }
};