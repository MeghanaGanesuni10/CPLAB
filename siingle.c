#include<stdio.h>
#include<stdlib.h>
struct node 
{
   int data;
   struct node *next;
};
typedef struct node NODE;
NODE*head=NULL;


int create ()
{
   NODE*newnode,*tail;
   char ch;
   do{
      newnode = (NODE*)malloc(sizeof(NODE));
      printf("enter node value:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(head==NULL)
      {
         head = newnode;
         tail = newnode;
      }
          else 
      {
        tail->next=newnode;
        tail=newnode;
       }
       printf("do u want to continue(Y/N):");
       scanf(" %c",&ch);
    }while(ch=='y'|| ch=='Y');
}
int ins_at_begin()
{
   NODE*newnode;
   newnode=(NODE*)malloc(sizeof(NODE));
   printf("enter elements to insert at begin :");
   scanf("%d",&newnode->data);
   newnode->next=head;
   head=newnode;
   return 0;
   
}
int ins_at_end()
{
     NODE*newnode,*tail=head;
     newnode=(NODE*)malloc(sizeof(NODE));
   
   printf("enter elments to insert at end:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(head==NULL)
   {
     head=newnode;
   }
   else
   {
   while(tail->next != NULL){
         tail=tail->next;
    }
    tail->next=newnode;
    }
   return 0;
}
int ins_at_pos()
{
   NODE *newnode,*prev=head;
   int i,pos;
   printf("enter position to insert node:");
   scanf("%d",&pos);
   
   if(pos==1){
       ins_at_begin();
    }
    else
    {
     for(i=1;i<(pos-1);i++)
       {
       prev=prev->next;
       }
       newnode=(NODE*)malloc(sizeof(NODE));
       printf("enter elements to insert at position:");
       scanf("%d",&newnode->data);
       newnode->next=prev->next;
       prev->next=newnode;
    }
    return 0;
 }
   
int display()
{
    NODE*temp =head;
     while(temp!=NULL){
         printf("%d->",temp->data);
         temp=temp->next;
    }
    printf("NULL\n");
    return 0;
}

int main()
{
   create();
   display();
   ins_at_begin();
   display();
   ins_at_end();
   display();
   ins_at_pos();
   display();
}
    
    
   
