/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program swaps two numbers using pointers.

#include <stdio.h>
int main()
{
    int a=10,b=20;
    void swap(int *,int *);

    swap(&a,&b);
    printf("%d %d",a,b);


    return 0;
}

void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}