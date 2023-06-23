#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

int main(void){

    // Initialize root node
    Node *root;
    root = init_root(root);

    // Creating a list of short interger
    short list[] = {50,34,89,2,14,100,22};

    // Populating binarytree
    for(short c=0; c < (sizeof(list)/sizeof(short)); c++){
        root = insert_node(root, list[c]);
    }

    printf("Testing From Main\n");

    // Showing binary tree in ascending order
    print_binarytree(root);
    printf("\n");

    return 0;
}