#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    float avg;
    printf("enter numbers");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    
    sum = a+b+c+d+e;
    avg =(a+b+c+d+e)/5;
    
    
    printf("sum is %d\n",sum);
    printf("average is %f/n",avg);
    }
