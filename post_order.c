#include"tree.h"
void post_order(TREE *ptr)
{ 
  if(ptr){
  post_order(ptr->left);
  post_order(ptr->right);
  printf(" %d",ptr->data);
}
}
