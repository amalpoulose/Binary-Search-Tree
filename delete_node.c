#include"tree.h"
void delete_node(TREE **ptr,int n)
{
	TREE *p,*q,*r;
	q=search(*ptr,n); //assign the node to be deleted in to q
	p=parent;         //assign parent node to p
	if(q==0)
	{
		printf("Node Doesn't exist\n");
		return;
	}


	if(q->left!=NULL && q->right!=NULL)  // node to be deleted contain  2 branchs
	{
               
		r=q->right;                 
		p=q;                      
		while(r->left)
		{
			p=r;
			r=r->left;
		}
		q->data=r->data;   
		q=r;
	}


	if(q->left!=NULL && q->right==NULL)  // node to be deleted contain  one branch to left
	{
		if(p->left==q)
			p->left=q->left;
		else if(p->right==q)
			p->right=q->left;
                else                         // node to be deleted is root node
                   *ptr=q->left;
		free(q);q=NULL; return; 
	} 

	if(q->left==NULL && q->right!=NULL) // node to be deleted contain  one branch to right
	{
		if(p->left==q)
			p->left=q->right;
		else if(p->right==q)
			p->right=q->right;
                else                           // node to be deleted is root node
                   *ptr=q->right;
		free(q);q=NULL;  return; 
	} 


	if(q->left==NULL && q->right==NULL)   //if the node to be deleted contain no nodes below it.(no branches)
	{
             if(p==q)                //Tree contain one node  means one root node present and want to delete it 
             {
                   free(*ptr);
                   *ptr=NULL;
                   return;
             }
		if(p->left==q)
			p->left=NULL;
		else
			p->right=NULL;
		free(q);q=NULL;  return;
	} 


}

