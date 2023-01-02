#include <stdio.h>
#include <string.h>
#include <strings.h>

#define SIZE 6

int top = -1;
char stack[SIZE];
void push();
void pop();
void display();
void peep();
void reverse();
char rev[SIZE];

int main()
{
    int choice;
    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.display\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        // case 4:
        //     exit(0);
        case 4:
            reverse();
            break;

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the string to be added onto the stack: ");
        scanf("%d", &x);
        gets(stack);
        top = strlen(stack);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%c\n", stack[i]);
    }
}
void peep()
{
    printf("%d", stack[top]);
}
void reverse()
{
    for (int i = 0; top != -1; i++)
    {
        rev[i] = stack[i];
    }

    puts(stack);
    puts(rev);
}
