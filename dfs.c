#include <stdio.h>
int n = 5;
int a[10];

void print();
void replace();
void insert();
void delete();
void search();

void main()
{
    int ch, i;
    for (i=0;i<5;i++)
    {
        printf("Enter Element:");
        scanf("%d", &a[i]);
    }

    printf("Enter your Choice:- \n 1)Print \n 2)Insert \n 3)Delete \n 4)Search \n 5)replaced \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        print();
        break;

    case 2:
        insert();
        break;

    case 3:
        delete ();
        break;

    case 4:
        search();
        break;
    case 5:
        replace();
        break;

    default:
        printf("Invalid Choice");
        break;
    }
}
void print()
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d:-%d\n", i, a[i]);
    }
}
void replace()
{
    int rp, i;
    printf("Enter Index of number to be replaced:");
    scanf("%d", &i);
    printf("Enter Number to be replaced:");
    scanf("%d", &rp);
    a[i] = rp;
    print();
}
void insert()
{
    int in, v, i;
    printf("Enter Index of number to be Inserted:");
    scanf("%d", &in);
    printf("Enter Number to be Inserted:");
    scanf("%d", &v);
    for (i=n-1;i>=in;i--)
    {
        a[i+1] = a[i];
    }
    n++;
    a[in] = v;
    print();
}

void delete()
{
    int j, i;
    printf("Enter Index of number to be deleted:");
    scanf("%d",&j);
    for (i=j;i<n;i++)
    {
        a[i] = a[i+1];
    }
    n--;
    print();
}

void search()
{
    int d, i;
    printf("Enter Element to be Searched:");
    scanf("%d",&d);
    for (i = 0; i < n; i++)
    {
        if (d == a[i])
        {
            printf("The Index No. of Element is %d\n", i);
            goto exit;
        }
    }
    printf("Number entered does not Exist in array");
    exit:
    return;
}