#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

#define MAX 100

struct Queue
{
    int arr[MAX];
    int front;
    int rear;
};

// Initialize Queue
void initialize(struct Queue *q)
{
    q->front = -1;
    q->rear = -1;
}

// Empty
bool empty(struct Queue *q)
{
    return q->front == -1;
}

// Full
bool full(struct Queue *q)
{
    return q->rear == MAX - 1;
}

// Size
int size(struct Queue *q)
{
    if (empty(q))
        return 0;

    return q->rear - q->front + 1;
}

// Enqueue
void enqueue(struct Queue *q, int val)
{
    if (full(q))
    {
        printf("Queue Overflow\n");
        return;
    }

    if (empty(q))
        q->front = 0;

    q->rear++;
    q->arr[q->rear] = val;
}

// Dequeue
void dequeue(struct Queue *q)
{
    if (empty(q))
    {
        printf("Queue Underflow\n");
        return;
    }

    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front++;
    }
}

// Front element
int frontElement(struct Queue *q)
{
    if (empty(q))
    {
        printf("Queue is Empty\n");
        return -1;
    }

    return q->arr[q->front];
}

// Print Queue
void print(struct Queue *q)
{
    if (empty(q))
    {
        printf("Queue is Empty\n");
        return;
    }

    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    print(&q);

    dequeue(&q);

    print(&q);

    printf("Front = %d\n", frontElement(&q));
    printf("Size = %d\n", size(&q));
    printf("Empty = %d\n", empty(&q));

    return 0;
}