/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/
#include <stdio.h>

int fib(int n)
{
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fib(n-2)+fib(n-1);
    return ans;
}

int main()
{
    int n;
    int fib(int n);
    printf("Enter the value of n \n");
    scanf("%d",&n);
    printf("The nth fiboncacci number is %d \n",fib(n));
    return 0;
}