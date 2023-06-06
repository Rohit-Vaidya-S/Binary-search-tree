struct node *deleting(struct node *root, int data)
{
  if (root == NULL) 
  
  return root;

  if (data < root->data)
    root->left = deleting(root->left, data);
  else if (data > root->data)
    root->right = deleting(root->right, data);
  else 
  {
    if (root->left == NULL) 
    {
      struct node *temp = root->right;
      
      return temp;
    } else if (root->right == NULL)
    {
      struct node *temp = root->left;
      
      return temp;
    }
    struct node *temp = leftmostLeaf(root->right);
    root->data = temp->data;
    root->right = deleting(root->right, temp->data);
  }
  
  return root;
}
