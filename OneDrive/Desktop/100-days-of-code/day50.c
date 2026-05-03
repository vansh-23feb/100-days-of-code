#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert into BST (for building tree)
struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

// Search in BST
struct Node* search(struct Node* root, int key) {
    // Base case: root is NULL or key found
    if (root == NULL || root->data == key)
        return root;

    // If key is smaller, search left subtree
    if (key < root->data)
        return search(root->left, key);

    // If key is greater, search right subtree
    return search(root->right, key);
}

// Main function
int main() {
    struct Node* root = NULL;

    // Build BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    int key = 60;

    struct Node* result = search(root, key);

    if (result != NULL)
        printf("Node %d found in BST.\n", key);
    else
        printf("Node %d not found in BST.\n", key);

    return 0;
}
