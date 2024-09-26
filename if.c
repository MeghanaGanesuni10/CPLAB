#include<stdio.h>
int main(){
int a,b,c;
printf("enter numbers");
scanf("%d%d%d", &a, &b, &c);
   if(a>b && a>c){
      printf("a is big ");
   }
   
   elseif( b>c && b>a){
        printf("b is big");
        }
        elseif(c>a && c>b){
               printf("c is big");
        }
  }
