#include<stdio.h>
#include<stdlib.h>
struct node
{
  int coeff;
  int exp;
  struct node*next;
};
typedef struct node NODE;
NODE*head=NULL;

int create(){
    NODE*newnode,*tail;
    char ch;
    do{
       newnode=(NODE*)malloc(sizeof(NODE));
       printf("enter coeff, exp value:");
       scanf("%d%d",&newnode->coeff,&newnode->exp);
       newnode->next=NULL;
       if(head==NULL){
          head=newnode;
          tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
         }
         printf("do u want to continue:(y/n)");
         scanf(" %c",&ch);
       }while(ch=='y' || ch=='Y');
     return 0;
 }
 
 int display(){
     NODE*temp=head;
     printf("polynomial");
     while(temp!=NULL){
           printf("%dx^%d",temp->coeff,temp->exp);
           temp=temp->next;
           if(temp!=NULL){
              printf("+");
            }
            } 
           printf("\n");
      
      return 0;
 }
 int main(){
     create();
     display();
     return 0;
 }
