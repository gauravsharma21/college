#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct Queue
{
    int front, rear, size;
    int arr[MAX];
};
struct Queue *makeQueue()
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = 0;
    queue->rear = MAX - 1;
    queue->size = 0;
    return queue;
}
int isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}
int isFull(struct Queue *queue)
{
    return (queue->size == MAX);
}
void enqueue(struct Queue *queue, int x)
{
    if (isFull(queue)){
        printf("Overflow");
        exit(1);
    }
    queue->rear = (queue->rear + 1) % MAX;
    queue->arr[queue->rear] = x;
    queue->size++;
    printf("enqueued\n");
}
int dequeue(struct Queue *queue)
{
    if (isEmpty(queue)){
        printf("Underflow");
        exit(1);
    }
    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1) % MAX;
    queue->size--;
    return item;
}
int main()
{
    struct Queue *queue = makeQueue();
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    printf("%d\n", dequeue(queue));
    printf("%d\n", dequeue(queue));
    printf("%d\n", dequeue(queue));
    printf("%d %d", queue->front, queue->rear);
    return 0;
}