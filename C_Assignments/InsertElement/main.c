/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

//This program is to insert an element into a given array
#include<stdio.h>
int main()
{
    int a[20],n,position,value;

    //User input of the array
    printf("Enter the number of terms: \n");
    scanf("%d",&n);

    printf("Enter the values \n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    //User input of the position and value of the element to be inserted
    printf("Enter the position and value \n");
    scanf("%d %d",&position,&value);

    //Inserting the element into the array
    for(int i=n-1;i>=position-1;i--){
        a[i+1]=a[i];
    }
    a[position-1]=value;

    printf("The required array is \n ");
    for(int i=0;i<=n;i++){
        printf("%d", a[i]);
        printf("\n ");
    }

    return 0;
}