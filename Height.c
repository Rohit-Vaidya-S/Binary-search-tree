#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int calculateHeight(struct Node* root) {
    if (root == NULL) {
        return -1; // Empty tree has height -1
    }
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}