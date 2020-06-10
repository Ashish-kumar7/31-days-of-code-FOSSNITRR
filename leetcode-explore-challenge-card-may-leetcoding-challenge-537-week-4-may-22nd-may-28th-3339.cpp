class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();   
       return  bsthelper(preorder,0,n);
    }
    TreeNode * bsthelper(vector<int>preorder,int s,int n){
        if(s>=n){
            return NULL;
        }
        int data=preorder[s];
        TreeNode * root=new TreeNode(data);
        int i=s+1;
        while(i<preorder.size() && preorder[i]<data){
            i++;
        }
        root->left=bsthelper(preorder,s+1,i);
        root->right=bsthelper(preorder,i,n);
        return root;
    }
};