#include<stdio.h>
int main(){
    int  n;
    do{
    printf("enter nummmbers");
    scanf("%d" ,&n);
    
    printf("%d\n", &n);
    if(n%2 != 0){
    break;
    }
    
    }while(1);
    printf("thank u");
    }
