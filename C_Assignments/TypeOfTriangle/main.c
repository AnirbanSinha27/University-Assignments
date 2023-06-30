/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program checks what type of triangle.

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b==c)
        printf("The triangle is equilateral");
    else if(a==b && b!=c || a==c && c!=b || b==c && c!=a)
        printf("The triangle is isocelles");
    else if(a!=b && a!=c && b!=c)
        printf("The triangle is scalene");
    else
        printf("Invalid Triangle");

    return 0;
}