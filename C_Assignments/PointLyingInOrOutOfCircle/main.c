/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program checks if a given point lies inside or outside the circle.

#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,r;
    int dist=0;
    printf("Enter the x and y coordinates of center of circle : \n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the radius of the circle");
    scanf("%d",&r);
    printf("Enter the coordinates of the point: \n");
    scanf("%d%d",&x2,&y2);

    dist= sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    if(dist<r)
        printf("The point is inside the circle \n");
    else
        printf("The point is outside the circle");

    return 0;
}