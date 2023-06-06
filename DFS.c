struct node 
{
    int data;
    struct node* left;
    struct node* right;
};

void dfs_preorder(struct node* root) 
{
    if (root == NULL) 
    {
        return;
    }
    printf("%d ", root->data);
    dfs_preorder(root->left);
    dfs_preorder(root->right);
}

void dfs_inorder(struct node* root) 
{
    if (root == NULL) 
    {
        return;
    }
    dfs_inorder(root->left);
    printf("%d ", root->data);
    dfs_inorder(root->right);
}

void dfs_postorder(struct node* root) 
{
    if (root == NULL) 
    {
        return;
    }
    dfs_postorder(root->left);
    dfs_postorder(root->right);
    printf("%d ", root->data);
}

