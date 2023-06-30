/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program depics basics of structures in C.

#include <stdio.h>
int main()
{
    struct student{
        int roll;
        int year;
    };

    struct student s[5];
    int n;

    for(int i=0;i<=4;i++){
        printf("Enter the details of student%d : \n",i);
        scanf("%d%d",&s[i].roll,&s[i].year);
    }

    printf("Enter the required year :\n");
    scanf("%d",&n);

    for(int i=0;i<=4;i++){
        if(s[i].year==n){
            printf("Roll numnber of the required student is %d",s[i].roll);
        }
        else{
            printf("No record found");
        }
    }

    return 0;
}