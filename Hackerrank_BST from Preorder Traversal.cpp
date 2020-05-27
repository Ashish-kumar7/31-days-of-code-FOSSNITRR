bool helper(Node * root,int min,int max){
    if(root==NULL){
        return 1;
    }
    if(root->data<=min ||root->data>=max){
        return 0;
    }
    return ( helper(root->left,min,root->data) && helper(root->right,root->data,max) );
}
	bool checkBST(Node* root) {
		
        int min=-1;
        int max=10001;
      return helper(root,min,max);
	}