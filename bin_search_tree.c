#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node*left,*right;
};
typedef struct node NODE;
NODE*root=NULL;

NODE*createnode(int value)
{
   NODE*newnode=(NODE*)malloc(sizeof(NODE));
   newnode->data=value;
   newnode->left=NULL;
   newnode->right=NULL;
   return newnode;
}

NODE*insert(NODE*root,int value)
{
   if(root==NULL)
       return createnode(value);
   else if(value<root->data)
        root->left=insert(root->left,value);
   else if(value>root->data)
        root->right=insert(root->right,value);
   else
     printf("duplicate values not allowed\n");
     
     return root;
}

NODE*search(NODE*root,int key)
{
   if(root==NULL||root->data==key)
      return root;
    if(key<root->data)
       return search(root->left,key);
    else
       return search(root->right,key);
       
 }
 
void inorder(NODE*root)
{
   if(root!=NULL){
       inorder(root->left);
       printf("%d",root->data);
       inorder(root->right);
     }
}

void preorder(NODE*root)
{
   if(root!=NULL){
      printf("%d",root->data);
      preorder(root->left);
      preorder(root->right);
    }
}

void postorder(NODE*root)
{    
    if(root!=NULL){
   postorder(root->left);
   postorder(root->right);
   printf("%d",root->data);
  }
}

int main(){
    int choice,value;
    NODE*found;
    while(1){
      printf("BInary search tyree\n");
      printf("1.insert\n2.search\n3.inorder\n4.preorder\n5.postorder\n6.exit\n");
      printf("enter your choice\n");
      scanf("%d",&choice);
      switch(choice){
          case 1:
               printf("enter value to insert:");
               scanf("%d",&value);
               root=insert(root,value);
               break;
           case 2:
           printf("enter value to search:");
           scanf("%d",&value);
           found=search(root,value);
           if(found!=NULL)
              printf("%d found in BST\n",value);
           else
              printf("%d not found in BST \n",value);
             break;
           case 3:
              printf("inorder traversal\n");
              inorder(root);
              printf("\n");
              break;
          case 4:
              printf("preoder traversal\n");
              preorder(root);
              printf("\n");
              break;
           case 5:
           printf("postorder traversal\n");
           postorder(root);
           printf("\n");
           break;
        case 6:
            exit(0);
        default :
            printf("invalid choice\n");
      }
    }
  return 0;
}
         
     
