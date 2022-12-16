/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

#include <stdio.h>
int fact(int n)
{
    int a=1;
    while(n>0){
        a*=n;
        n--;
    }
    return a;
}

int main()
{
    int n,f;
    printf("Enter the number \n");
    scanf("%d", &n);
    f=fact(n);
    printf("The factorial is %d \n", f);
    return 0;
}