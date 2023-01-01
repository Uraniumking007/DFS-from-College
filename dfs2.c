#include <stdio.h>
struct stu
{
    char name[10];
    int enroll, m[4];
} s[3];

void print();
void avg();

void main()
{
    int i;

    for (i = 1; i <= 3; i++)
    {
        printf("Enter Name of Student %d \n", i);
        scanf("%s", &s[i].name);

        printf("ENter ENrollment Number: \n");
        scanf("%d", &s[i].enroll);
        for (int j = 1; j <= 3; j++)
        {
            printf("ENter M%d: ", j);
            scanf("%d", &s[i].m[j]);
        }
    }
    print();
    avg();
}
void avg()
{
    int aveg[3], sum[3];

    for (int i = 1; i <= 3; i++)
    {
        sum[i] = 0;
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            sum[i] = sum[i] + s[i].m[j];
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        aveg[i] = sum[i] / 3;
    }

    for (int i = 1; i <= 3; i++)
    {
        printf("Average marks of Student %d: %d \n", i, aveg[i]);
    }
}
void print()
{
    int i;

    for (i = 1; i <= 3; i++)
    {

        printf("%s", s[i].name);
        printf("Enrollment Number: %d\n", s[i].enroll);
        for (int j = 1; j <= 3; j++)
        {
            printf("M%d: %d \n", j, s[i].m[j]);
        }
    }
}