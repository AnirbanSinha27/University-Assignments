/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/
#include<stdio.h>
int main()
{
    int a[20],n,position;

    printf("Enter the number of terms: \n");
    scanf("%d",&n);

    printf("Enter the values \n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the position \n");
    scanf("%d",&position);

    for(int i=position-1;i<=n;i++){
        a[i]=a[i+1];
    }

    printf("The required array is \n ");
    for(int i=0;i<n-1;i++){
        printf("%d", a[i]);
        printf("\n ");
    }

    return 0;
}