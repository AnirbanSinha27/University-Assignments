/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

//This program is for reversing a string without using the string.h header file
#include <stdio.h>

int main()
{
    char a[10],r[10];
    int counter=0;

    //User input of the string
    printf("Enter the string \n");
    gets(a);

    //Identifying the length of the string
    for(int i=0;a[i]!='\0';i++){
        counter++;
    }
    
    for(int i=0;i<=counter;i++){
        r[i]=a[counter-i-1];
    }
    r[counter]='\0';

    //Printing the reversed string
    printf("The reversed string is %s \n",r);

    return 0;
}