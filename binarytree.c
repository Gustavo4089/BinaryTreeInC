#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

Node* init_root(Node *root){
    root = NULL;
    return root;
}

Node* insert_node(Node *root, short value){
    if(root == NULL){
        Node *new_node = (Node*) malloc(sizeof(Node));
        new_node->value = value;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;

    }else{
        if(value > root->value){
            root->right = insert_node(root->right, value);

        }else if(value < root->value){
            root->left = insert_node(root->left, value);

        }else{
            // Error Message, because is the same value
            printf("Cannot to be inserted, repeated value \n");
        }

        return root;
    }
}

void print_binarytree(Node *root){
    if(root != NULL){
        print_binarytree(root->left);
        printf(" %i ", root->value);
        print_binarytree(root->right);
    }
}