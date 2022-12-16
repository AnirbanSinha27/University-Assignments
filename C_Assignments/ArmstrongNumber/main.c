/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n, lastDigit,noOfDigits,counter=0,temp,ans=0;

    printf("Enter the number: \n");
    scanf("%d",&n);
    temp=n;

    while(n>0){
        noOfDigits=n/10;
        counter++;
        n/=10;
    }
    n=temp;

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