#include <stdio.h>
char s[10];
int TOP = -1;
int n = 10;
void PUSH(char x)
{
    if (TOP >= n - 1)
    {
        printf("Stack Overflow \n");
    }

    else
    {
        TOP++;
        s[TOP] = x;
    }
}

char POP()
{
    char v = 'a';
    if (TOP == -1)
    {
        printf("Stack Underflow \n");
    }

    else
    {
        v = s[TOP];
        TOP--;
    }
    return v;
}

void main()
{
    char op, x, str[10], st[12];
    printf("Enter the value of string  : ");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        PUSH(str[i]);
        i++;
    }
    i = 0;
    while (TOP != -1)
    {
        x = POP();
        st[i] = x;
        i++;
    }
    printf("\nReverses string = %s", st);
}
