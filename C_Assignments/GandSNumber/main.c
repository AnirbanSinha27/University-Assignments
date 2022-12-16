#include <stdio.h>
#include<string.h>
#include<limits.h>
int  main(){
   int arr[100];
    int n_terms;
    printf("Enter the number of terms \n");
    scanf("%d", &n_terms);
    for(int i=0;i<n_terms;i++){
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    int g=INT_MIN, s=INT_MAX;
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