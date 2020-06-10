class Solution {
public:
    TreeNode * help(TreeNode * root,int & count, int k){
        if(root==NULL){
            return NULL;
        }
     TreeNode * left=  help(root->left,count,k);
        
        if(left!=NULL){
            return left;
        }
        count++;
        if(count==k){
            return root;
        }        
        return help(root->right,count,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        TreeNode * func= help(root,count,k);
        if(func==NULL){
            return -1;
        }
        return func->val;
    }
};