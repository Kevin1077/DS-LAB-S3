#include<stdio.h>
int a[50],front=-1,rear=-1,n;
void enqueue();
void dequeue();
void display();
void main()
{
int choice;
printf("enter the number of elements in queue\n");
scanf("%d",&n);
do
{
printf("enter the choice\t1)enqueue\t2)dequeue\t3)display\t4)exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
display();
break;
}
case 4:
{
break;
}
default :
{
printf("invalid choice\n");
}
}
}
while(choice!=4);
}
void enqueue()
{
int num;
printf("enter the element to be added\n");
scanf("%d",&num);
if(front==-1&&rear==-1)
{
front=0;
rear=0;
a[rear]=num;
}
else if(front==(rear+1)%n)
{
printf("overflow\n");
}
else
{
rear=(rear+1)%n;
a[rear]=num;
}
}
void dequeue()
{
int item;
if(front==-1&&rear==-1)
{
printf("underflow\n");
}
else if(front==rear)
{
item=a[front];
printf("The dequeued element is %d\n",item);
front=-1;
rear=-1;
}
else
{
item=a[front];
printf("The dequeued element is %d\n",item);
front=(front+1)%n;
}
}
void display() {
int i;
if(front == -1)
printf("Empty Circular queue, no elements to display\n");
else {
 printf("Elements of circular queue: ");
for (i = front; i != rear; i = (i + 1) %n) 
{
printf("%d ", a[i]);
}
printf("%d ", a[i]);
printf("\nfront is positioned at %d\n",front);
printf("The rear is positioned at %d\n",rear);
}
printf("\n");
}
