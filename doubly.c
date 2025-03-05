#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node*prev;
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
           newnode->prev=NULL;
        }
        else{
            while(tail->next!=NULL)
                  tail=tail->next;
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
         }
         printf("do u want to continue:(y/n)");
         scanf(" %c",&ch);
      }while(ch=='y' || ch=='Y');
      return 0;
 }
 
      
 int insert_at_begin(){
      NODE*newnode;
      newnode=(NODE*)malloc (sizeof (NODE));
      printf("enter node value to insert at begin:");
      scanf("%d", &newnode->data);
      newnode->prev=NULL;
      newnode->next=head;
      head->prev=newnode;
      head=newnode;
  }
  
  
 int insert_at_end(){
      NODE*newnode,*tail=head;
      newnode=(NODE*)malloc (sizeof (NODE));
      printf("enter node value to insert at end:");
      scanf("%d", &newnode->data);
      newnode->next=NULL;
      if(head==NULL){
          head=newnode;
          newnode->prev=NULL;
      }
      else{
          while(tail->next!=NULL){
                tail=tail->next;
            }
            newnode->prev=tail;
            tail->next=newnode;
            
        }
        return 0;
 }
 
  insert_at_pos(){
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
      int   printf("enter node value to insert at pos:");
         scanf("%d", &newnode->data);
         newnode->prev=temp;
         newnode->next=temp->next;
         temp->next->prev=newnode;
         temp->next=newnode;
         }
     return 0;
  }

int delete_at_begin(){
     NODE*temp=head;
     head=head->next;
     printf("deleted node %d",temp->data);
     free(temp);
     head->prev=NULL;
     return 0;
  }
 
int delete_at_end(){
    NODE*temp=head;
    if(head==NULL){
        printf("list is empty");
     }
     else{
         while(temp->next!=NULL){
               temp=temp->next;
          }
          temp->prev->next=NULL;
          printf("deleted node at end %d",temp->data);
          free(temp);
        }
        return 0;
    }

int delete_at_pos(){
    NODE*temp=head;
    int i,pos;
    printf("enter position value");
    scanf("%d",&pos);
    if(pos==1){
        delete_at_begin();
        return 0;
     }
     else{
         for(i=1;i<(pos);i++){
              temp=temp->next;
          }
          temp->next->prev=temp->prev;
          temp->prev->next=temp->next;
        printf("deleted at position is %d",temp->data);
        free(temp);
        }
        return 0;
   }
          
     
    

int display(){
    NODE*temp=head;
    printf("NULL<->");
    while(temp!=NULL){
    printf("%d<->",temp->data);
         temp=temp->next;
    }
    printf("NULL\n");
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
     delete_at_begin();
     display();
     delete_at_begin();
     display();
     delete_at_end();
     display();
     delete_at_pos();
     display();
     
     return 0;
}
      
    
    
         
      
      
      
      
