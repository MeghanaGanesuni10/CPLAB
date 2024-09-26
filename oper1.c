#include<stdio.h>
int main(){
int a,b,c,d,t;
    printf("enter numbers");
    scanf("%d\n%d\n%d\n%d" , &a,&b,&c,&d);

    t=a/b*c-b+a*d/3;
    printf(" output is %d" , t);
}
