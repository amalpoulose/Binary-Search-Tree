#include "tree.h"
int main(void)
{
	TREE *hptr=0;
	char ch,option;
	int n,no;
	do
	{
          system("clear");
          printf("\t\t\tBinary Search Tree\n\n1. Create Tree\n2. Search Data\n3. Print Tree\n4. Delete Node\n\nEnter Option  :");
          scanf(" %c",&option);
	  switch(option)
          {
           case '1':do
		     {
                      system("clear");
                      printf("\t\t\tAdd Tree\n\n");
                      printf("Enter the Data : ");
                      scanf("%d",&no);
                      add_tree(&hptr,no);    
                      printf("More nodes ?(y/n) : ");
                      scanf(" %c",&ch);
                      }while(ch=='y' ||ch =='Y');
		    break;
	   case '2':system("clear");
                    printf("\t\t\tSearch Data\n\n");
                    printf("\nenter the data you want to find : ");
		    scanf(" %d",&n);
		    TREE *p=search(hptr,n);
                    if(p)
                      printf("\n%d found at %p\n",n,p);
                    else
                      printf("\nData not found\n");
                    break;
	   case '3':system("clear");
                    printf("\n\n1. post order\n2. In order\n3. Pre order\n\nEnter choice : ");
                    scanf(" %c",&option);
                    system("clear");
	            switch(option)
                    {
                       case '1':printf("\n\n\t\t\tPost Order\n\n"); 
                                if(hptr)
				  post_order(hptr);
                                else
                                  printf("No nodes found\n"); 
                                 break;
                       case '2':printf("\n\n\t\t\tIn Order\n\n"); 
                                if(hptr)
				  in_order(hptr);
                               else
                                  printf("No nodes found\n");  
                                 break;
                       case '3':printf("\n\n\t\t\tPre Order\n\n"); 
                                if(hptr)
				  pre_order(hptr);
                                else
                                  printf("No nodes found\n");  
                                 break;
                       default:printf("Invalid choice\n");
                    }
                    break;
	  case '4':system("clear");
                   printf("\t\t\tDelete Node\n\nEnter the data to delete : ");
                   scanf("%d",&n);
                   delete_node(&hptr,n);
                   break;
           default:printf("Invalid Option\n");
          }
        parent=hptr;         
	printf("\nDo you want to continue?(Y/N)  : ");
	scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y'); 

	return(0); 
}
