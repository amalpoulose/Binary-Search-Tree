#include"tree.h"
void in_order(TREE *ptr)
{ 
  if(ptr){
  in_order(ptr->left);
  printf(" %d",ptr->data);
  in_order(ptr->right);
}
}
