/*
Copyright (c) 2022 Anirban Sinha
Licensed under MIT license
*/

// This program has all the operations on linkedlists in C.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

//Delete operation
void delete(struct node **head,int position){
    if(position==0){
        struct node *temp=*head;
        *head=(*head)->link;
        free(temp);
    }
    else{
        struct node *current=*head;
        struct node *previous=*head;
        int i=1;
        while(i<=position){
        current=current->link;
        i++;
      }
      i=1;
      while(i<position){
        previous=previous->link;
        i++;
      }
      previous->link=current->link;
      free(current);
    }
}

//Displaying the linked list operation
void display(struct node *ptr){
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->link;
    }
}

//Append Operation
void append(struct node **head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    if(*head==NULL){
        ptr->data=data;
        ptr->link=NULL;
        *head=ptr;
    }
    else{
        struct node *p=*head;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=ptr;
        ptr->data=data;
        ptr->link=NULL;
    }
}

//Prepend operation
void prepend(struct node **head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    if(*head==NULL){
        ptr->data=data;
        ptr->link=NULL;
        *head=ptr;
    }
    else{
        ptr->data=data;
        ptr->link=*head;
        *head=ptr;
    }
}

//Adding node at a particular index operation
void addAtIndex(struct node **head,int data,int index){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    int i=1;
    struct node *temp=*head;
    while(i<index){
        temp=temp->link;
        i++;
    }
    ptr->link=temp->link;
    temp->link=ptr;
    ptr->data=data;
}


int main()
{
    void append(struct node **,int);
    void display(struct node *);
    void prepend(struct node **,int);
    void addAtIndex(struct node **,int,int);
    void delete(struct node **,int);

    struct node *head=NULL;
    
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,6);
    prepend(&head,0);
    addAtIndex(&head,69,2);
    delete(&head,1);
    display(head);

    return 0;
}