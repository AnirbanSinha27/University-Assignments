/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("\n Enter the string \n ");
    gets(str);
    
    char sub[100];
    printf("\n Enter the substring \n");
    gets(sub);
    
    int sub_str_len = strlen(sub);
    
    int counter = 0, j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == sub[j]){
            counter += 1;
            j += 1;
            if(counter == sub_str_len){
                printf("\n Substring exists \n");
                return 0;
            }
        }
        else{
            counter = 0;
            j = 0;
        }
    }
    printf("\n Substring doesnt exist \n");
    
    return 0;
}