#include<stdio.h>
void main()
{
   int lim,i,search,count=0,flag=0;
   count=count+2;
   printf("Enter a limit\n");
   scanf("%d",&lim);
   count++;
   int a[lim];
   count++;
   printf("enter values in the array\n");
   for(i=0;i<lim;i++)
   {   count++;
      scanf("%d",&a[i]);
      count++;
   }
   count++;
   printf("Enter the value to search\n");
   scanf("%d",&search);
   count++;
   for(i=0;i<lim;i++)
   {  count++;
       if(a[i]==search)
       {count++;
          printf("%d is present in the array\n",a[i]);
          count++;
          break;
       }
       else
       {count++;
        flag++;
       }
   }
   count++;
   if(flag==lim)
   {
   printf("%d is not in the array\n",search);
   count=count+3;
   }
   printf("Time complexity=%d\nspace complexity=%d\n",count,24+(lim*4));
   
}

