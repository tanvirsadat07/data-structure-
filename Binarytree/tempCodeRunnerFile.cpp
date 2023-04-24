
    int balanced(node *root){

        if(root==NULL){
            return 0;
        }
        int left=balanced(root->left);
        int right=balanced(root->right);
        if(left==-1||right==-1)return -1;
        if(abs(left-right)>1)return -1;
        return max(left,right)+1;

    }