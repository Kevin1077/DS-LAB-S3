#include<stdio.h>
void main()
{
   int  lim,i,j,min_index,temp,count=0;
   count=count+1;
   printf("Enter the limit:\n");
   scanf("%d",&lim);
   count=count+1;
   int a[lim];
   printf("Enter the values:\n");
   for(i=0;i<lim;i++){
   count=count+1;
      scanf("%d",&a[i]);
      count=count+1;
   }
   count=count+1;
   for(i=0;i<lim;i++)
   {  count=count+1;
        min_index=i;
        count=count+1;
        
        for(j=i+1;j<lim;j++){
        count=count+1;
            
            if(a[j]<a[min_index]){
            count=count+1;
               min_index=j;
               count=count+1;
            }
            count=count+1;
        }
        count=count+1;
        temp=a[min_index];
        count=count+1;
            a[min_index]=a[i];
            count=count+1;
            a[i]=temp;
            count=count+1;
   }
   count=count+1;
   printf("The sorted array is:\n");
   for(i=0;i<lim;i++){
   count=count+1;
        printf("%d\n",a[i]);
        count=count+1;
   }
   count=count+3;
   printf("Time complexity=%d \n",count);
   printf("space complexity=%d\n",24+(4*lim));
}
