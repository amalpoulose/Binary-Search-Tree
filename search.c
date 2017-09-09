#include"tree.h"
TREE *search(TREE *ptr,int n)
{
 if(ptr==0)
   return 0;
 else if(ptr->data==n)
   return ptr;
 else if(n < ptr->data)
   {
   parent=ptr;
   return search(ptr->left,n);
   }
 else{
   parent=ptr;
   return search(ptr->right,n);
 }
}
