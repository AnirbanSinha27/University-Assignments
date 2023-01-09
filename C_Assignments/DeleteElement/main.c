/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

//This program is to delete an element form an array
#include<stdio.h>
int main()
{
    int a[20],n,position;

    //User input of array
    printf("Enter the number of terms: \n");
    scanf("%d",&n);

    printf("Enter the values \n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    //User input of the position of the element to be deleted
    printf("Enter the position \n");
    scanf("%d",&position);

    //Deleting the element
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