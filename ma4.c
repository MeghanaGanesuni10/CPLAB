#include<stdio.h>
int main(){
    int a,b,c,d,max,min;
    printf("enter numbers");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    
    max = a;
    
    if(max<b)
       max=b;
       if(max<c)
          max=c;
          if(max<d)
             max = d;
             
             printf("big is %d", max);
             }
    
    
