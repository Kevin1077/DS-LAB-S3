#include<stdio.h>
void main()
{
   int lim,i,j,temp,count=0;
   count=count+1;
   printf("Enter a limit:\n");
   scanf("%d",&lim);
   int a[lim];
   count=count+1;
   printf("enter the numbers:\n");
   for(i=0;i<lim;i++){
   count=count+1;
      scanf("%d",&a[i]);
      count=count+1;
   }
   count=count+1;
   for(i=0;i<lim;i++){
   count=count+1;
   for(j=i+1;j<lim;j++){
   count=count+1;
   if(a[i]>a[j]){
   count=count+1;
     temp=a[i];
     count=count+1;
     a[i]=a[j];
     count=count+1;
     a[j]=temp;
     count=count+1;
   }
   count=count+1;
   }
   count=count+1;
}
count=count+1;
   printf("The sorted array is:\n");
   for(i=0;i<lim;i++){
   count=count++;
       printf("%d\t",a[i]);
       count=count+1;
   }
   printf("\n");
   count=count+3;
   printf("Time complexity=%d \n",count);
   printf("space complexity=%d\n",24+(4*lim));
   }


