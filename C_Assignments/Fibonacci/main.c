/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/
#include <stdio.h>

int main()
{
    int a,b,n,c;
    
    printf("Enter first number: \n");
    scanf("%d",&a);
    printf("Enter second number: \n");
    scanf("%d",&b);
    printf("Enter the number of times \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");



    return 0;
}