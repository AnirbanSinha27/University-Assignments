/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program checks if the given two bianry trees are identical.

#include <stdio.h>
#include <stdbool.h>

// Structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to check if two binary trees are identical
bool areIdentical(struct Node* root1, struct Node* root2) {
    // If both trees are empty, they are identical
    if (root1 == NULL && root2 == NULL)
        return true;

    // If either one of the trees is empty, they are not identical
    if (root1 == NULL || root2 == NULL)
        return false;

    // Check if the current nodes have the same data
    // and recursively check the left and right subtrees
    return (root1->data == root2->data) &&
           areIdentical(root1->left, root2->left) &&
           areIdentical(root1->right, root2->right);
}

// Main function to test the program
int main() {
    // Construct the first binary tree
    struct Node* root1 = createNode(1);
    root1->left = createNode(2);
    root1->right = createNode(3);
    root1->left->left = createNode(4);
    root1->left->right = createNode(5);

    // Construct the second binary tree
    struct Node* root2 = createNode(1);
    root2->left = createNode(2);
    root2->right = createNode(3);
    root2->left->left = createNode(4);
    root2->left->right = createNode(5);

    // Check if the trees are identical
    if (areIdentical(root1, root2))
        printf("The given binary trees are identical.\n");
    else
        printf("The given binary trees are not identical.\n");

    return 0;
}
