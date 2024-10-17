#include<stdio.h>
int main(){
    int n;
    printf("enter   numbers");
    scanf("%d\n", &n);
    
    int sum=0;
    for(int i=1 ;i<=n; i++){
    sum = sum+i;
    printf("%d\n", i);
    }
    printf("sum is %d\n", sum);
    }
