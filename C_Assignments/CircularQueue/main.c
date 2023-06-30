/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program depicts a circular queue and its operations.
#include <stdio.h>
#include <stdlib.h>

//Insert function
void insert(int a[], int ch, int *r, int *f) {
    if (*f == -1) {
        *f = *r = 0;
        a[*r] = ch;
    } else if (*f == 0 && *r == 4 || *r==(*f-1)) {
        printf("Queue overflow\n");
    } else if (*r == 4 && *f != 0) {
        *r = 0;
        a[*r] = ch;
    } else {
        (*r)++;
        a[*r] = ch;
    }
}

//Delete function
void delete(int a[], int *f, int *r) {
    if (*f == -1) {
        printf("Queue underflow\n");
    } else if (*f == *r) {
        *f = *r = -1;
    } else if (*f == 4) {
        *f = 0;
    } else {
        (*f)++;
    }
}

//Delete function
void display(int a[], int f, int r) {
    if (f == -1) {
        printf("Queue is Empty\n");
        return;
    }
    int i = f;
    while (i != r) {
        printf("%d ", a[i]);
        i = (i + 1) % 5;
    }
    printf("%d ", a[r]);
}


int main() {
    int a[5];
    int r = -1, f = -1, x, ch;

    while (1) {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &x);
        switch (x) {
            case 1:
                printf("Enter the number: ");
                scanf("%d", &ch);
                insert(a, ch, &r, &f);
                break;

            case 2:
                delete(a, &f, &r);
                break;

            case 3:
                display(a, f, r);
                break;

            case 4:
                exit(1);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
