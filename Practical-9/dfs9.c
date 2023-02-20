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
    } // printf("%p",START);
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
    while (selection)
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
            counter();
            break;
        default:
            printf("Invalid Entry");
            break;
        }
    }
}