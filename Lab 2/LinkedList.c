#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head = NULL;

void insert(int val)
{
    struct Node *newNode, *save;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = val;
    newNode->link = NULL;

    if (head == NULL)
    {
        head = newNode;
    }

    else
    {
        save = head;
        while (save->link != NULL)
        {
            save = save->link;
        }

        save->link = newNode;
    }
}

void delete()
{
    struct Node *save;

    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        save = head;

        printf("%d is deleted", head->data);

        head = head->link;

        free(save);
    }
}

void display()
{
    struct Node *save;

    save = head;

    while (save != NULL)
    {
        printf("%d ->", save->data);
        save = save->link;
    }

    printf("NULL\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    display();
    delete();

    display();
}