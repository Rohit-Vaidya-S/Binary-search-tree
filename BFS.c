#define MAX_QUEUE_SIZE 100

struct Node
 {
    int data;
    struct Node* left;
    struct Node* right;
};

void BFS(struct Node* root) 
{
    if (root == NULL) 
    {
        return;
    }
    struct Node* queue[MAX_QUEUE_SIZE];
    int front = 0;
    int rear = 0;
    queue[rear++] = root;
    while (front < rear) 
    {
        struct Node* current = queue[front++];
        printf("%d ", current->data);
        if (current->left != NULL) 
        {
            queue[rear++] = current->left;
        }
        if (current->right != NULL) 
        {
            queue[rear++] = current->right;
        }
    }
}
