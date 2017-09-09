#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct BST
{
	struct BST *left;
	int data;
	struct BST *right;
}TREE;
void add_tree(TREE **,int);
TREE *search(TREE *,int);
void post_order(TREE *);
void in_order(TREE *);
void pre_order(TREE *);
void add_node(TREE **,int);
void delete_node(TREE **,int);
TREE *parent;
