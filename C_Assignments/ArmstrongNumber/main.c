/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program checks if the given number is armstrong or not.

#include<stdio.h>
#include<math.h>

int main()
{
    int n, lastDigit,noOfDigits,counter=0,temp,ans=0;

    //User input
    printf("Enter the number: \n");
    scanf("%d",&n);
    temp=n;

    //Calculating number of digits
    while(n>0){
        noOfDigits=n/10;
        counter++;
        n/=10;
    }
    n=temp;

    //Checking if the number is armstrong or not
    while(n>0){
        lastDigit=n%10;
        ans=ans+pow(lastDigit,counter);
        n/=10;
    }
    n=temp;

    if(ans==n)
        printf("The number is an armstrong number \n");
    else
        printf("The number is not an armstrong number \n");
    
    return 0;
}