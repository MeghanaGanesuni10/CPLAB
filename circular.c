#include<stdio.h>
#include<stdlib.h>

struct node{
    
    int data;
    struct node*next;
};
typedef struct node NODE;
NODE	*head=NULL;

int create(){
    NODE*newnode,*tail;
    char ch;
    do{
       newnode=(NODE*)malloc(sizeof(NODE));
       printf("enter node value:");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(head==NULL){
           head=newnode;
           tail=newnode;
           
        }
        else{
        
            while(tail->next!=NULL)
                  tail=tail->next;
            tail->next=newnode;
            tail=newnode;
         }
         tail->next=head;
         printf("do u want to continue:(y/n)");
         scanf(" %c",&ch);
      }while(ch=='y' || ch=='Y');
      return 0;
 }
 int insert_at_begin(){
     NODE*newnode,*temp=head;
      newnode=(NODE*)malloc (sizeof (NODE));
      printf("enter node value to insert at begin:");
      scanf("%d", &newnode->data);
      
      if(head==NULL){
          head=newnode;
          head->next=head;
      }
      else{
          while(temp->next!=head){
                temp=temp->next;
            }
         temp->next=newnode;
         newnode->next=head;
         head=newnode;
      }
      return 0;
  }

int insert_at_end(){
      NODE*newnode,*temp=head;
      newnode=(NODE*)malloc (sizeof (NODE));
      printf("enter node value to insert at begin:");
      scanf("%d", &newnode->data);
      newnode->next=head;
      if(head==NULL){
          head=newnode;
         
      }
      else{
          while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=newnode;
      }
    return 0;
 }
 
 int insert_at_pos(){
      NODE*newnode,*temp=head;
      int i,pos;
      printf("enter position to inssert ");
      scanf("%d",&pos);
      if(pos==1){
          insert_at_begin();
          return 0;
      }
      else{
          for(i=1;i<(pos-1);i++){
              temp=temp->next;
           }
         newnode=(NODE*)malloc (sizeof (NODE));
         printf("enter node value to insert at pos:");
         scanf("%d", &newnode->data);
         newnode->next=temp->next;
         temp->next=newnode;
         }
     return 0;
  }


   
int display(){
     NODE*temp=head;
     if(head==NULL){
        printf("list is empty\n");
        return 0;
      }
      else{
          printf("circular linked list\n");
        do
          {
            printf("%d",temp->data);
            temp=temp->next;
     } while(temp!=head);
     printf("back to head node");
    
         }
    
    
    return 0;
 }
 
 
 int main(){
     create();
     display();
     insert_at_begin();
     display();
     insert_at_end();
     display();
     insert_at_pos();
     display();
     /*delete_at_begin();
     display();
     delete_at_begin();
     display();
     delete_at_end();
     display();
     delete_at_pos();
     display();*/
     
     return 0;
}
      
    
    
         
      
      
      
      
