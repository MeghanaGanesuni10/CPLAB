#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*next;
};
typedef struct node NODE;
NODE*front=NULL,*rear=NULL;
int enqueue(int ele)
{
   NODE*newnode;
   newnode=(NODE*)malloc(sizeof(NODE));
   newnode->data=ele;
   newnode->next=NULL;
   if(rear==NULL){
      front=rear=newnode;
    }
    else{
       rear->next=newnode;
       rear=newnode;
    }
  return 0;
 }
 
 int dequeue(){
     NODE*temp=front;
     if(front==NULL)
        printf("queue is underflow\n");
     else{
        front=front->next;
        if(front==NULL)
            rear=NULL;
         else{
             printf("the deleted element is %d",temp->data);
             free(temp);
         }
      }
  }
int display(){
    NODE*temp=front;
    while(temp!=NULL){
        printf("%d->",temp->data);
       temp=temp->next;
     }
     printf("NULL\n");
     return 0;
 }
 int main(){
     int ch,ele;
     while(1)
     {
      printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
      printf("enter your choice");
      scanf("%2d",&ch);
      switch(ch){
           case 1:printf("enter element");
                  scanf("%d",&ele);
                  enqueue(ele);
                  break;
           case 2:dequeue();
                  break;
           case 3:display();
                  break;
           case 4:exit(0);
                  break;
           default:printf("invalid choice\n");
           }
      }
     return 0;
     }
 
       
