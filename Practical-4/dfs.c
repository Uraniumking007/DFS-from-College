#include <stdio.h>

char S[10];
int top = -1;
int N = 10;

void Push(char c)
{

    if (top > N)
    {
        printf("Stack Overflow");
    }

    else
    {
        top++;
        S[top] = c;
    }
}

char Pop()
{
    char c;
    if (top == -1)
    {
        printf("Stack Underflow");
        return 0;
    }
    else
    {
        top--;
        return S[top + 1];
    }
}

void main()
{
    char str[10];
    char rev[10];
    int i = 0;

    printf("Enter a string:");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        Push(str[i]);
        i++;
    }

    i = 0;
    while (top != -1)
    {
        rev[i] = Pop();
        i++;
    }
    printf("Reverse String:%s \n", rev);
}