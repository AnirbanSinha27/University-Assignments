/*
Copyright (c) 2022 Anirban Sinha

Licensed under MIT license
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char arr[100];
    printf("Enter the string \n");
    gets( arr );
    bool flag=1;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]!=arr[strlen(arr)-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("The word is a palindrome \n");
    }
    else{
        printf("The word is mot a palindrome \n");
    }
    
    return 0;
}