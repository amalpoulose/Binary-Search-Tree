#include"tree.h"
void pre_order(TREE *ptr)
{
  if(ptr){
  printf(" %d",ptr->data);
  pre_order(ptr->left);
  pre_order(ptr->right);
}
}
