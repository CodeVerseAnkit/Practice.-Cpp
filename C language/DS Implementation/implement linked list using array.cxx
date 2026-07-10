#include <stdio.h>
#include <conio.h>

#define MAX 100
#define NULL_INDEX -1

struct Node
{
    int data;
    int next;
};

struct Node arr[MAX];
int head;
int avail;

// Initialize
void initialize()
{
    head = NULL_INDEX;
    avail = 0;

    for (int i = 0; i < MAX - 1; i++)
        arr[i].next = i + 1;

    arr[MAX - 1].next = NULL_INDEX;
}

// Allocate a node
int getNode()
{
    if (avail == NULL_INDEX)
        return NULL_INDEX;

    int p = avail;
    avail = arr[avail].next;
    return p;
}

// Free a node
void freeNode(int p)
{
    arr[p].next = avail;
    avail = p;
}

// Insert at beginning
void insertBegin(int val)
{
    int p = getNode();

    if (p == NULL_INDEX)
    {
        printf("List is Full\n");
        return;
    }

    arr[p].data = val;
    arr[p].next = head;
    head = p;
}

// Insert at end
void insertEnd(int val)
{
    int p = getNode();

    if (p == NULL_INDEX)
    {
        printf("List is Full\n");
        return;
    }

    arr[p].data = val;
    arr[p].next = NULL_INDEX;

    if (head == NULL_INDEX)
    {
        head = p;
        return;
    }

    int temp = head;
    while (arr[temp].next != NULL_INDEX)
        temp = arr[temp].next;

    arr[temp].next = p;
}

// Delete from beginning
void deleteBegin()
{
    if (head == NULL_INDEX)
    {
        printf("List is Empty\n");
        return;
    }

    int temp = head;
    head = arr[head].next;
    freeNode(temp);
}

// Delete from end
void deleteEnd()
{
    if (head == NULL_INDEX)
    {
        printf("List is Empty\n");
        return;
    }

    if (arr[head].next == NULL_INDEX)
    {
        freeNode(head);
        head = NULL_INDEX;
        return;
    }

    int prev = head;
    int curr = arr[head].next;

    while (arr[curr].next != NULL_INDEX)
    {
        prev = curr;
        curr = arr[curr].next;
    }

    arr[prev].next = NULL_INDEX;
    freeNode(curr);
}

// Search
int search(int key)
{
    int temp = head;

    while (temp != NULL_INDEX)
    {
        if (arr[temp].data == key)
            return temp;

        temp = arr[temp].next;
    }

    return NULL_INDEX;
}

// Print list
void display()
{
    if (head == NULL_INDEX)
    {
        printf("List is Empty\n");
        return;
    }

    int temp = head;

    while (temp != NULL_INDEX)
    {
        printf("%d ", arr[temp].data);
        temp = arr[temp].next;
    }

    printf("\n");
}

int main()
{
    initialize();

    insertEnd(10);
    insertEnd(20);
    insertBegin(5);
    insertEnd(30);

    printf("List: ");
    display();

    deleteBegin();
    printf("After deleteBegin: ");
    display();

    deleteEnd();
    printf("After deleteEnd: ");
    display();

    int pos = search(20);

    if (pos != NULL_INDEX)
        printf("20 found at array index %d\n", pos);
    else
        printf("20 not found\n");

    return 0;
}