#include <stdio.h>
int Q[10];
int F = -1, R = -1;
int MAX;

void insert()
{
    int E;
    printf("Enter the element ot be inserted:");
    scanf("%d", &E);
    if (R == MAX - 1 && F == 0)
    {
        printf("Queue Overflow\n");
    }
    else if (F == -1 && R == -1)
    {
        F = 0;
        R = 0;
    }
    else if (R == MAX - 1 && F != 0)
    {
        R = 0;
    }

    else
    {
        R++;
    }
    Q[R] = E;
}

void del()
{
    int v;
    if (F == -1)
    {
        printf("UnderFlow\n");
    }
    else
    {
        v = Q[F];
        if (F == R)
        {
            F = -1;
            R = -1;
        }
        else if (F == MAX - 1)
        {
            F = 0;
        }
        else
        {
            F++;
        }
        printf("Element Deleted:%d\n", v);
    }
}

void display()
{
    int i;
    if (F <= R)
    {
        for (int i = F; i <= R; i++)
        {
            printf("%d\n", Q[i]);
        }
    }
    else
    {
        for (i = F; i < MAX; i++)
        {
            printf("%d\n", Q[i]);
        }
        for (i = 0; i <= R; i++)
        {
            printf("%d\n", Q[i]);
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