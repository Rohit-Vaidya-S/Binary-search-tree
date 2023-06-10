int max(int a, int b) {
    return (a > b ? a : b);
}

int diameter(struct node* root) {
    if (root == NULL) {
        return 0;
    } else {
        int left_height = calculateHeight(root->left);
        int right_height = calculateHeight(root->right);
        int left_diameter = diameter(root->left);
        int right_diameter = diameter(root->right);
      
        return max(left_height + right_height + 1, max(left_diameter, right_diameter));
    }
}
