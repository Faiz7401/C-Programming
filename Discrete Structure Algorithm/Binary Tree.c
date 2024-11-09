#include <stdio.h>
#include <stdlib.h>


struct btree_node
{
    int number;
    struct btree_node *left,*right;
};

struct btree_node *rootptr,*newptr,*currentptr,*previousptr,*tmpptr;

struct btree_node * SEARCH(btree_node *,int);
void INSERT(int);
void INORDER (btree_node *);
void DELETE (int);
struct btree_node * COPY(btree_node *);

int main ()
{

   int element,choice;
   rootptr=NULL;

   while (choice !=0)
   {
     printf("\n\n MENU ");
     printf("\n 0: Quit");
     printf("\n 1: Search");
     printf("\n 2: Insert");
     printf("\n 3: Display Accending");
     printf("\n 4: Delete by copying");
     printf("\n\n Enter your choice: ");
     scanf("\t%d",&choice);

         switch(choice)
         {
          	case 1 : printf("\n SEARCH");
            			printf("\n Enter the searching number:");
            			scanf("%d", &element);
                     tmpptr = SEARCH(rootptr,element);
                     if(tmpptr!= NULL)
                     printf("\n The number %d is found",tmpptr->number);
                     else
                     printf("\n The number %d is not found", element);
                     break;

         	case 2 : printf ("\n Insert");
            		   printf("\n Enter an integer number: ");
                 		scanf("%d",&element);
                 		INSERT(element);
                 		printf ("\n Insertion is successful");
                 		break;

         	case 3 : printf("\n Display number in accending \n\n");
                     INORDER(rootptr);
                  	break;

         	case 4 : printf ("\n Delete BY COPY");
                 		printf("\n Enter a number to delete: ");
                 		scanf("%d",&element);
                 		DELETE(element);
                 		break;

            default: printf("\n Please enter number only from the MENU");

         }
   }

   return 0;

}

void INSERT(int number)
{
   newptr = (struct btree_node*) malloc (sizeof(struct btree_node));
   newptr->left = NULL;
   newptr->right = NULL;
   newptr->number = number;

   currentptr =rootptr;
   while (currentptr!=NULL) //search the location to insert
   {
      previousptr = currentptr;

      if (number > currentptr->number)
         currentptr = currentptr->right;
      else
         currentptr = currentptr->left;
   }

   if (rootptr==NULL)
      rootptr = newptr;
   else if (number > previousptr->number)
      previousptr->right = newptr;
   else
      previousptr->left = newptr;
}

void INORDER (btree_node *node)
{
   if (node!=NULL)
   {
      INORDER(node->left);
      printf("\n -- %d",node->number);
      INORDER(node->right);
   }

}

btree_node* SEARCH(btree_node *node,int number)
{
 	if(node!=NULL)// node is not null
   {
    	if(number == node->number)
      	return node;

      else if(number > node->number)
      	return SEARCH(node->right,number);

      else
      	return SEARCH(node->left,number);
   }

   else
   	return NULL;

}

void DELETE(int number)
{
   currentptr = rootptr;

   while (currentptr!=NULL)//search the node to delete
   {
      if (currentptr->number == number)
         break;

      previousptr = currentptr;//previousptr hold the address of node to delete

      if (number > currentptr->number)
         currentptr = currentptr->right;
      else
         currentptr = currentptr->left;
   }

   if (currentptr==NULL)
     { printf ("\n Number %d is not in the tree!!!",number);
       return;
     }

   else if (currentptr->number == number)
      {	if (currentptr == rootptr)
         	rootptr=COPY(rootptr);
      	else if (previousptr->left == currentptr)
           previousptr->left=COPY(previousptr->left);
      	else
           previousptr->right=COPY(previousptr->right);
      }

}

btree_node* COPY (btree_node *node)
{
   struct btree_node *previousptr2;
   tmpptr=node;

   if(node->right==NULL)//no right node
      node = node->left;

   else if (node->left==NULL)//no left node
      node = node->right;

   else
     {
      tmpptr = node->left;
      previousptr2 =node;
      	while (tmpptr->right!=NULL) //find the rightmost node of the left subtree
      	{
         	previousptr2 = tmpptr;
         	tmpptr = tmpptr->right;
      	}

      node->number = tmpptr->number;//copy the element to node

      if (previousptr2 == node)
      	previousptr2->left = tmpptr->left;

      else
         previousptr2->right = tmpptr->left;
     }

   free(tmpptr);
   return node;
}

