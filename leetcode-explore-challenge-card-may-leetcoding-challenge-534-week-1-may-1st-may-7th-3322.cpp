class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            bool Aval=0;
            bool Bval=0;
            int n=Q.size();
            for(int i=0;i<n;i++){
                TreeNode * value=Q.front();
                Q.pop();
                if(value->val==x){
                    Aval=1;
                }
                if(value->val==y){
                    Bval=1;
                }
                if(value->left!=NULL && value->right!=NULL){
                    if(value->left->val==x &&  value->right->val==y){
                        return 0;
                    }
                     if(value->right->val==x &&  value->left->val==y){
                        return 0;
                    }
                }
                if(value->left!=NULL){
                    Q.push(value->left);
                }
                if(value->right!=NULL){
                    Q.push(value->right);
                }        
            }
            if(Aval && Bval){
                return 1;
            }   
        }
        return 0;
    }
};