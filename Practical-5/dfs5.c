#include <stdio.h>
#include <string.h>
#include <strings.h>

#define SIZE 6

int top = -1;
char stack[SIZE];
char infix[20],postfix[20];
int i,j,l;
void push(char d);
void pop();
int f(char a);
int g(char b);
int isOperand(char c);

void main() {
    printf("Enter String\n");
    gets(infix);
    // puts(infix);
    l = strlen(infix);
    // printf("%d",l);
    infix[l] = ')';
    infix[l+1] = '\0';
    puts(infix);
    push('(');
    i=0;
    j=0;
    while (infix[i]!='\0')
    {
        if(isOperand(infix[i])) {
            postfix[j]=infix[i];
            j++;
        }   
        else    
        {
            while (f(stack[top])>g(infix[i]))
            {
                postfix[j]=stack[top];
                pop();
                j++;
            }
            if(f(infix[i]!=g(stack[top])))  {
                push(infix[i]);
            }   else    {
                pop();
            }
        }
        printf("%c\t%s\t%s\n",infix[i],stack,postfix);
        i++;
    }
    printf("%s",postfix);            
        
}

void push( char d )
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        // printf("\nEnter the string to be added onto the stack: ");
        // scanf("%d", &x);
        // gets(stack);
        // top = strlen(stack);
        stack[top] = d;
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
int f(char a)    {
    if (a=='+' || a=='-')
    {
        return 2;
    }
    else if (a=='*'||a=='/')
    {
        return 4;
    }
    else if(a=='^') {
        return 5;
    }
    else if (a=='(')
    {
        return 0;
    }   
}
int g(char b)    {
    if (b=='+' || b=='-')
    {
        return 1;
    }
    else if (b=='*'||b=='/')
    {
        return 3;
    }
    else if(b=='^') {
        return 1;
    }
    else if (b=='(')
    {
        return 7;
    }
    else    {
        return 0;
    }
}
int isOperand(char c)   {
    if (c>='a' && c<='z')
    {
        return 1;
    }
    else {
        return 0;
        }   
}
