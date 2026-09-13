#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
if ((rear + 1) % SIZE == front)
{
printf("Queue is Full\n");
}
else
{
if (front == -1)
front = 0;

rear = (rear + 1) % SIZE;
queue[rear] = value;
printf("%d inserted\n", value);
}
}

void dequeue()
{
if (front == -1)
{
printf("Queue is Empty\n");
}
else
{
printf("%d deleted\n", queue[front]);

if (front == rear)
{
front = -1;
rear = -1;
}
else
{
front = (front + 1) % SIZE;
}
}
}

void display()
{
int i;

if (front == -1)
{
printf("Queue is Empty\n");
}
else
{
printf("Circular Queue: ");

i = front;
while (1)
{
printf("%d ", queue[i]);

if (i == rear)
break;

i = (i + 1) % SIZE;
}

printf("\n");
}
}

int main()
{
int choice, value;

while (1)
{
printf("\n1. Enqueue");
printf("\n2. Dequeue");
printf("\n3. Display");
printf("\n4. Exit");
printf("\nEnter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
printf("Enter value: ");
scanf("%d", &value);
enqueue(value);
break;

case 2:
dequeue();
break;

case 3:
display();
break;

case 4:
return 0;

default:
printf("Invalid choice\n");
}
}
}
