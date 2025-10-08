#include <stdio.h>

#define MAX 5

void enqueue(int queue[], int *front, int *rear)
{
    if (*rear == MAX - 1)
	{
        printf("Queue is full!\n");
        return;
    }
    int value;
    printf("Enter value to enqueue: ");
    scanf("%d", &value);

    if (*front == -1)
	{
        *front = 0;
    }
    (*rear)++;
    queue[*rear] = value;
    printf("Enqueued %d\n", value);
}

int dequeue(int queue[], int *front, int *rear)
{
    if (*front == -1)
	{
        printf("Queue is empty!\n");
        return -1;
    }
    int item = queue[*front];
    if (*front == *rear)
    {
        *front = -1;
        *rear = -1;
    }
	else 
        (*front)++;
    return item;
}

int peek(int queue[], int front)
{
    if (front == -1)
	{
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front];
}

void display(int queue[], int front, int rear)
{
    if (front == -1)
	{
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
	{
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, value;
    printf("1. Enqueue 2. Dequeue 3. Peek 4. Display 0. Exit\n");
    while (1) 
	{ 
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue(queue, &front, &rear);
                break;
            case 2:
                value = dequeue(queue, &front, &rear);
                if (value != -1) {
                    printf("Dequeued: %d\n", value);
                }
                break;
            case 3:
                value = peek(queue, front);
                if (value != -1) {
                    printf("Front element: %d\n", value);
                }
                break;
            case 4:
                display(queue, front, rear);
                break;
            case 0:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice!\zn");
        }
    }
    return 0;
}
