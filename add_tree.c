/* // With recursion  

#include"tree.h"
void add_tree(TREE **ptr , int n)
{
	if(*ptr==0)
	{
		*ptr=(TREE *)malloc(sizeof(TREE));
		(*ptr)->data=n;
		(*ptr)->left=(*ptr)->right=0;
	}
	else if(n<(*ptr)->data)
		add_tree(&(*ptr)->left,n);
	else
		add_tree(&(*ptr)->right,n);
}*/

/*   Without Recursion

#include"tree.h"
void add_tree(TREE **ptr , int n)
{
	if(*ptr==0)
	{
		*ptr=(TREE *)malloc(sizeof(TREE));
		(*ptr)->data=n;
		(*ptr)->left=(*ptr)->right=0;
		return;
	}
	TREE *temp=*ptr,*sudo;
	while(temp)
	{
		if(n<(temp->data)){
			sudo =temp;
			temp=temp->left;}
		else{
			sudo =temp;
			temp=temp->right;
		}}
	if(n<sudo->data)
	{       sudo->left=(TREE *)malloc(sizeof(TREE));
		sudo->left->data=n;
		sudo->left->left=sudo->left->right=0;
	} else
	{       sudo->right=(TREE *)malloc(sizeof(TREE));
		sudo->right->data=n;
		sudo->right->left=sudo->right->right=0;
	}
}*/
   
/*  With out recursion (function)*/
#include"tree.h"
void add_tree(TREE **ptr , int n)
{
	if(*ptr==0)
	{   
                add_node(ptr,n);
		return;
	}
	TREE *temp=*ptr,*sudo;
	while(temp)
	{
		if(n<(temp->data)){
			sudo =temp;
			temp=temp->left;}
		else{
			sudo =temp;
			temp=temp->right;
		}}
	if(n<sudo->data)
                add_node(&sudo->left,n);
        else
                add_node(&sudo->right,n);
}

void add_node(TREE **ptr, int n)
{
		*ptr=(TREE *)malloc(sizeof(TREE));
		(*ptr)->data=n;
		(*ptr)->left=(*ptr)->right=0;
}
