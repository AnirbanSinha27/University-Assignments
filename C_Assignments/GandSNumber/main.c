/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

//This program is to find the greatest and smallest number in a given array
#include <stdio.h>
#include<string.h>
#include<limits.h>
int  main(){
    int arr[100];
    int n_terms;
    //User input of the array
    printf("Enter the number of terms \n");
    scanf("%d", &n_terms);
    printf("Enter the values one by one:");
    for(int i=0;i<n_terms;i++){
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    int g=INT_MIN, s=INT_MAX;
    //Finding the greatest and smallest number
    for(int i=0;i<n_terms;i++){
        if(arr[i]>g){
            g=arr[i];
        }
        if(arr[i]<s){
            s=arr[i];
        }
    }
    printf("The greatest number is %d \n", g);
    printf("The smallest number is %d \n", s);

    return 0;
}