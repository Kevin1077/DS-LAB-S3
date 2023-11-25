#include<stdio.h>
void main()
{
   int lim,a[30],t,i,j;
   printf("Enter a limit:\n");
   scanf("%d",&lim);
   printf("Enter the values in the array:\n");
   for(i=0;i<lim;i++)
   {
      scanf("%d",&a[i]);
   }
   i=1;
   while(i<lim)
   {
     j=i;
     while(a[j]<a[j-1])
     {
       t=a[j];
       a[j]=a[j-1];
       a[j-1]=t;
       j=j-1;
     }
     i=i+1;
   }
   printf("The  array after insertionsort is \n");
   for(i=0;i<lim;i++)
   {
     printf("%d\t",a[i]);
   }
   printf("\n");
}
