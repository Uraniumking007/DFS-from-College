#include <stdio.h>
#include <stdlib.h>
struct node
{
    int INFO;
    struct node *NEXT;
} *START = NULL;

void create()
{
    int data;
    struct node *New_Node = (struct node *)malloc(sizeof(struct node));
    printf("Enter Value\n");
    scanf("%d", &data);
    New_Node->INFO = data;
    New_Node->NEXT = NULL;

    if (START == NULL)
    {
        START = New_Node;
    }
    else
    {
        struct node *PTR = START;
        while (PTR->NEXT != NULL)
        {
            PTR = PTR->NEXT;
        }
        PTR->NEXT = New_Node;
    } // printf("%p", START);
}
void Display()
{
    struct node *PTR = START;
    while (PTR != NULL)
    {
        printf("%d | %p -> ", PTR->INFO, PTR->NEXT);
        PTR = PTR->NEXT;
    }
}
void InsertFront()
{
    int d;
    printf("Enter Value to be Inserted");
    scanf("%d", &d);
    struct node *New_Node = (struct node *)malloc(sizeof(struct node));
    New_Node->NEXT = START;
    New_Node->INFO = d;
    START = New_Node;
}
void InsertEnd()
{
    int d;
    printf("Enter Value to be Inserted");
    scanf("%d", &d);
    struct node *PTR = START;
    while (PTR->NEXT != NULL)
    {
        PTR = PTR->NEXT;
    }
    if (PTR->NEXT == NULL)
    {
        struct node *New_Node = (struct node *)malloc(sizeof(struct node));
        New_Node->NEXT = NULL;
        New_Node->INFO = d;
        PTR->NEXT = New_Node;
    }
}
void deleteFront()
{
    struct node *PTR = START;
    START = START->NEXT;
    free(PTR);
}
void deleteEnd()
{
    struct node *PTR = START;
    struct node *PRE = PTR;
    while (PTR->NEXT != NULL)
    {
        PRE = PTR;
        PTR = PTR->NEXT;
    }
    PRE->NEXT = NULL;
    free(PTR);
}
void counter()
{
    struct node *PTR = START;
    int count = 0;
    while (PTR != NULL)
    {
        count++;
        PTR = PTR->NEXT;
    }
    printf("Total nodes in Linklist : %d \n", count);
}
void main()
{
    int selection;
    selection = 1;
    while (selection != 0)
    {
        printf("\n\n1. Create Element in Linklist \n2. Display Linklist \n3. Insert at Start of Linklist \n4. Insert at End of Linklist \n5. Delete First Node \n6. Delete Last Node \n7. Count total nodes in Linklist \n0. Exit\n\n");
        scanf("%d", &selection);
        switch (selection)
        {
        case 1:
            create();
            break;
        case 2:
            Display();
            break;
        case 3:
            InsertFront();
            break;
        case 4:
            InsertEnd();
            break;
        case 5:
            deleteFront();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            counter();
            break;
        default:
            printf("Invalid Entry");
            break;
        }
    }
}