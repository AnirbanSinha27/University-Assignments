/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program prints a respective pattern.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=65;j<=71-i;j++){
            printf("%c",j);
        }
        for(int j=1;j<=i*2-1;j++){
            printf(" ");
        }
        for(int j=71-i;j>=65;j--){
            if(j!=71)
                printf("%c",j);
        }   
        printf("\n");
    }

    return 0;
}

