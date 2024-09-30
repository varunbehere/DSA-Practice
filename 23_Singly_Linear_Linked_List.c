#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// Displaying Linear Linked List
void Display(PNODE First){
    while (First != NULL){
        printf("| %d | -> ", (First -> data));
        First = First -> next;
    }
    printf("| NULL |\n");
}

// Inserting at the beginning
void InserFirst (PPNODE First, int value){
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));

    newn -> data = value;
    newn -> next = NULL;

    if (*First == NULL){
        *First = newn;
    }
    else{
        newn -> next = *First;
        *First = newn;
    }
}

int main (){
    printf("Singly Linear Linked List\n");

    PNODE Head = NULL;
    InserFirst(&Head,10);
    InserFirst(&Head,5);
    InserFirst(&Head,1);

    Display(Head);

    return 0;
}
