#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*next;
};
typedef struct node NODE;
NODE*head=NULL;

int create()
{
   NODE*newnode,*tail;
   char ch;
   do
   {
      newnode=(NODE*)malloc(sizeof(NODE));
      printf("enter node value:");
      scanf("%d",& newnode->data);
      newnode->next =NULL;
      if(head==NULL){
          head=newnode;
          tail=newnode;
      }
      else
      {
        tail->next=newnode;
        tail=newnode;
      }
      printf("don u want to continue (y/n)");
      scanf(" %c" , &ch);
 }while(ch=='y' || ch=='Y');
 
 }
 int delete_at_begin()
 {
    NODE *temp=head;
    head=head->next;
    printf("deleted node is %d ->\n", temp->data);
    free(temp);
    return 0;
 }
 
 int delete_at_end()
 {
     NODE*prev,*temp=head;
     while(temp->next!=NULL)
     {
        prev=temp;
        temp=temp->next;
     }
     printf("deleted node id %d", temp->data);
     free(temp);
     prev->next=NULL;
     return 0;
 }
    
 int delete_at_pos()
{
   NODE *temp,*prev=head;
   int i,pos;
   printf("enter position to delete node:");
   scanf("%d",&pos);
   
   if(pos==1){
       delete_at_begin();
    }
    else
    {
     for(i=1;i<(pos-1);i++)
       {
       prev=prev->next;
       }
       temp=prev->next;
       prev->next=temp->next;
       printf("deleted node is %d",temp->data);
       free(temp);
       }
 }
       
 int display()
 {
   NODE*temp=head;
   while(temp!=NULL)
   {
      printf("%d->",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
    
 }
 
 int main(){
    create();
    display();
    delete_at_begin();
    display();
    delete_at_end();
    display();
    delete_at_pos();
    display();
 }
    
    
