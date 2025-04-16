#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rear=-1;
int queue[MAX];
int insert_at_rearend(int ele)
{
   if(rear==MAX-1){
       printf("queue overflow\n");
    }
    else{
       if(front==-1)
           front=0;
        rear++;
        queue[rear]=ele;
     }
   return 0;
}

int delete_at_frontend()
{
   if(front==-1){
      printf("stack underflow\n");
    }
    else if(front==rear){
        printf("the deleted element is %d",queue[front]);
        front=rear=-1;
     }
     else{
        printf("the deleted element is %d",queue[front]);
        front++;
      }
    return 0;
}

int insert_at_frontend(int ele){
    if(front==0)
     {
       front=-1;
       rear=-1;
       queue[front]=ele;
     }
     else if(front==rear){
          printf("insertion not posible\n");
     }
     else{
        front--;
        queue[front]=ele;
     }
    return 0;
}

int delete_at_rearend(){
    if(rear==-1){
       printf("stack underflow\n");
    }
    else if(front==rear){
         printf("the deleted element is %d",queue[rear]);
         front=rear=-1;
    }
    else{
       printf("the deleted element %d",queue[rear]);
       rear--;
     }
   return 0;
 }
 
 int display(){
     if(front==-1){
        printf("queue is empty\n");
     }
     else{
        for(int i=front;i<=rear;i++){
           printf("%d",queue[i]);
        }
        printf("\n");
      }
      return 0;
 }
 
 int  main(){
      int ch,ele;
      while(1){
        printf("1.insert_at_rearend\n2.delete_at_frontend\n3.insert_at_frontend\n4.delete_at_rearend\n5.display\n6.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:printf("enter element:");
                  scanf("%d",&ele);
                  insert_at_rearend(ele);
                  break;
           case 2:delete_at_frontend();
                  break;
           case 3:printf("enter element:");
                  scanf("%d",&ele);
                  insert_at_frontend(ele);
                   break;
           case 4:delete_at_rearend(); 
                  break;
           case 5:display();
                  break;
           case 6:exit(0);
           default:printf("invalid choice");
         }
         }
       return 0;
 }
 
                
    
        
       
