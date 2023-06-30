/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program computes matrix multiplication.

#include <stdio.h>
int main()
{
    //First matrix
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};

    //Second matrix
    int b[3][1]={{1},
               {2},
               {3}};

    //Resultant matrix
    int m[3][1];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=0;j++){
            m[i][j]=0;
        }
    }

    //Matrix Multiplication
    for(int i=0;i<=2;i++){
        for(int j=0;j<=0;j++){
            for(int k=0;k<=2;k++){
                m[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }

    //Printing resultant matrix
    printf("Resultant matrix is: \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=0;j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}