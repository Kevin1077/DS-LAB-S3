#include<stdio.h>
int stack[30],top,n,choice;
void push();
void pop();
void peak();
void display();
int main()
{
   top=-1;
   printf("Enter the number of terms:\n");
   scanf("%d",&n);
   
   do
   {
      printf("1) to push\n2) to pop\n3) peak\n4) to display the stack\n5) to exit \n");
      printf("Enter a choie:\n");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
         push();
         break;
         
         case 2:
         pop();
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
   
   void push()
   {
     if(top<n-1)
     {
        top=top+1;
        printf("Enter the element to push:\n");
        scanf("%d",&stack[top]);  
     }
     else
     {
        printf("The stack is in OVERFLOW condition\n");
     }
   }
   
   void pop()
   {
       if(top>=0)
       {
          printf("The poped element is %d\n",stack[top]);
          top=top-1;
       }
       else
       {
          printf("The stack is in UNDERFLOW condition\n");
       }
   }
   
   void peak()
   {
   if(top==-1){
      printf("The stack is empty\n");
   }
   else
   {
     printf("The topmost element is %d\n",stack[top]);
     }
   }
   
   void display()
   {
     int i;
     if(top==-1){
      printf("The stack is empty\n");
   }
   else
   {
     printf("The elements in the stack are:\n");
     for(i=top;i>=0;i--)
     {
        printf("%d\n",stack[i]);
     }
     }
   }


