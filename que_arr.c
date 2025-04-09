#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

int enqueue(int ele)
{
   if(rear==MAX-1)
       printf("queue is overflow\n");
    else{
       if(front==-1)
          front=0;
       rear++;
       queue[rear]=ele;
    }
    return 0;
 }

int dequeue(){
    if(front==-1)
       printf("queue is underflow\n");
    else if(front==rear){
         printf("deleted element is %d",queue[front]);
         front=-1;
         rear=-1;
     }
     else{
         printf("deleted element is %d",queue[front]);
           front++;
      }
     return 0;
}
int display(){
     int i;
    if(front==-1){
       printf("queue is empty\n");
     }
     else{
     printf("queue elements are\n");
         for(i=front;i<=rear;i++){
             printf("%2d\n",queue[i]);
           }
         }
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
 
      
      
     
      
        

       
