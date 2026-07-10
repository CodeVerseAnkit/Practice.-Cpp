#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
// Emplementaion of stack using array
#define Max 100
struct stack
{
    int arr[Max];
    int topidx;
};
// Initialize stack
void initialize(struct stack *s)
{
    s->topidx = -1;
}
// size function
int size(struct stack *s)
{
    return s->topidx + 1;
}
// Stack is full function
bool isFull(struct stack *s)
{
    return s->topidx >= Max - 1;
}
// empty function
bool empty(struct stack *s)
{
    return s->topidx == -1;
}

// push function
void push(struct stack *s, int val)
{
    if (isFull(s))
    {
        printf("Stack overflow \n");
        return;
    }
    s->topidx++;
    s->arr[s->topidx] = val;
}
// pop function
void pop(struct stack *s)
{
    if (empty(s))
    {
        printf("Stack underflow");
        return;
    }
    s->topidx--;
}
// top function
int top(struct stack *s)
{
    if (empty(s))
    {
        printf("Stack underflow");
        return 0;
    }
    return s->arr[s->topidx];
}

void print(struct stack *s)
{
    for (int i = s->topidx; i >= 0; i--)
    {
        printf("%d ", s->arr[i]);
    }
}
int main()
{
    struct stack s;
    initialize(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    pop(&s);
    print(&s);
    printf("\n%d", top(&s));
    printf("\n%d", size(&s));
    printf("\n%d", empty(&s));

    return 0;
}