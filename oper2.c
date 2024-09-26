#include<stdio.h>
int main(){
    int a,b,s;
    scanf("%d%d, &a,&b");
    
    s= a++ + b - --a;
    printf("output is %d",s);
    
    }
