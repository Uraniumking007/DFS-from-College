#include <stdio.h> #include <stdlib.h> struct node { int INFO; struct node *NEXT; }*START = NULL; void create() { int data; struct node *New_Node = (struct node *)malloc(sizeof(struct node)); printf("Enter Value\n"); scanf("%d", &data); New_Node->INFO = data; if (START == NULL) { START = New_Node; } else { struct node *PTR = START; while (PTR->NEXT != NULL) { PTR = PTR->NEXT; } PTR->NEXT = New_Node; } // printf("%p",START);
 } void Display() { struct node *PTR = START; while (PTR != NULL) { printf("%d | %p -> ", PTR->INFO,PTR->NEXT); PTR = PTR->NEXT; } } void InsertFront(){ int d; printf("Enter Value to be Inserted"); scanf("%d",&d); struct node *New_Node = (struct node *)malloc(sizeof(struct node)); New_Node->NEXT = START; New_Node->INFO = d; START = New_Node; }
 