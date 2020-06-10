TreeNode* Solution::invertTree(TreeNode* A) {
        if(A==NULL){
            return NULL;
        }
        else{
            invertTree(A->left);
            invertTree(A->right);
            TreeNode * temp;
            temp=A->left;
            A->left=A->right;
            A->right=temp;
        }
        return A;
}