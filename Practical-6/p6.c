#include <stdio.h>
int Q[10];
int F = -1, R = -1;
int MAX;

void insert()
{
    int E;
    printf("Enter the element ot be inserted:");
    scanf("%d", &E);
    if (R == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else if (F == -1 && R == -1)
    {
        F = 0;
        R = 0;
        Q[R] = E;
    }

    else
    {
        R++;
        Q[R] = E;
    }
}

void del()
{
    if (F == -1 || F > R)
    {
        printf("UnderFlow\n");
    }
    else
    {
        printf("Element Deleted:%d\n", Q[F]);
        F++;
    }
}

void display()
{
    if (F == R || F > R)
    {
        printf("Queue Empty\n");
    }
    else
    {
        for (int i = F; i <= R; i++)
        {
            printf("%d:-%d\n", i, Q[i]);
        }
    }
}

void main()
{
    printf("Enter the size of Queue:");
    scanf("%d", &MAX);
    int ch;
    do
    {
        printf("Enter your choice:\n 1)Insert \n 2)Delete \n 3)Display \n 4)Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit");
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    } while (ch != 4);
}