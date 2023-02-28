#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *LPTR;
    struct node *RPTR;
} *root = NULL;

struct node *create(struct node *root, int data)
{
    if (root == NULL)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->LPTR = NULL;
        new_node->RPTR = NULL;
        root = new_node;
        printf("\n%p\n", root);
        printf("\n%p\n", root->data);
        printf("\n%p\n", root->LPTR);
        printf("\n%p\n", root->RPTR);
        return root;
    }
    else if (data > root->data)
    {
        create(root->RPTR, data);
        return root;
    }
    else if (data < root->data)
    {
        create(root->LPTR, data);
        return root;
    }
}
void preorder(struct node *root)
{
    // printf("\n%p\n", root);
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->LPTR);
        preorder(root->RPTR);
    }
}

void main()
{
    int data, ch, n, i = 0;
    ch = 1;
    while (ch != 0)
    {
        printf("\n1. To Create \n 2. preorder");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nNo. of Nodes in BST\n");
            scanf("%d", &n);
            while (i < n)
            {
                printf("\nEnter Value of Node\n");
                scanf("%d", &data);
                root = create(root, data);
                i++;
            }
            // printf("%p", root);
            break;
        case 2:
            preorder(root);
            break;
        }
    }
}