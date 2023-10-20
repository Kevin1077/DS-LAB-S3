#include<stdio.h>
int stack[30],front=0,rear=-1,n,choice;
void enqueue();
void dequeue();
void peak();
void display();
int main()
{
   printf("Enter the number of terms:\n");
   scanf("%d",&n);
   
   do
   {
      printf("1) to enqueue\t2) to dequeue\t3) peak\t4) to display the stack\t5) to exit \t");
      printf("Enter a choie:\n");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
         enqueue();
         break;
         
         case 2:
         dequeue();
         break;
         
         case 3:
         peak();
         break;
         
         case 4:
         display();
         break;
         
         case 5:
         break;
         
         default:
         printf("Enter a valid choice\n");
         break;
      }
   }while(choice!=5);
}
   
   void enqueue()
   {
     if(rear<n-1)
     {
        rear=rear+1;
        printf("Enter the element to enqueue:\n");
        scanf("%d",&stack[rear]);  
     }
     else
     {
        printf("The stack is in OVERFLOW condition\n");
     }
   }
   
   void dequeue()
   {   if(front==rear){
       printf("The dequeued element is %d\n",stack[front]);
       front=0;
       rear=-1;
   }
       else if(rear<front)
       {
          printf("The stack is in UNDERFLOW condition\n");
          
       }
       else
       {
          printf("The dequeued element is %d\n",stack[front]);
          front=front+1;;
       }
   }
   
   void peak()
   {
   if(rear<front){
      printf("The stack is empty\n");
   }
   else
   {
     printf("The frontmost element is %d\n",stack[front]);
     }
   }
   
   void display()
   {
     int i;
     if(rear<front){
      printf("The stack is empty\n");
   }
   else
   {
     printf("The elements in the stack are:\n");
     for(i=rear;i>=front;i--)
     {
        printf("%d\n",stack[i]);
     }
     }
   }


