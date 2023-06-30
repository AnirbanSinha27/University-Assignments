/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program checks if a number is prime or not.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n;
    bool flag=1;
    printf("Enter the number : \n");
    scanf("%d",&n);

    for(int i=2;i<=sqrt(n);i++){
        if(n==2){
            break;
        }

        if(n%i==0){
            flag=0;
            break;
        }
    }

    if(flag==0){
        printf("The number is not a prime number \n");
    }
    else{
        printf("The number is a prime number \n");
    }

    return 0;
}