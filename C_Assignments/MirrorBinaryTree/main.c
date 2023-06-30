/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program created a mirror binary tree.

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//Inorder Traversal
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

//Mirror binary tree funtion
void mirrorTree(struct Node* root) {
    if (root == NULL) {
        return;
    }
    mirrorTree(root->left);
    mirrorTree(root->right);
    struct Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Inorder traversal before mirroring:\n");
    inorderTraversal(root);
    printf("\n");

    mirrorTree(root);

    printf("Inorder traversal after mirroring:\n");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
