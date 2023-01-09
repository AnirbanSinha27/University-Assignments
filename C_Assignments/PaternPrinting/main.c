/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

//This program is for printing a specific pattern
#include <stdio.h>

int main()
{
    int n;

    //User input of the number of rows
    printf("Enter the value of n: \n");
    scanf("%d",&n);

    //Pattern printing
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=n-i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}