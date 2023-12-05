#include<stdio.h>
void mergesort(int a[30],int first,int last);
void merge(int a[30],int first,int middle,int last);
void main()
{
   int n,a[30],i;
   printf("Enter the size of array:\n");
   scanf("%d",&n);
   printf("Enter elements in the array:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   mergesort(a,0,n-1);
   printf("The mergesorted array is:\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
   printf("\n");
}
void mergesort(int a[30],int first,int last)
{
   if(first<last)
 {
    int middle=(first+last)/2;
    mergesort(a,first,middle);
    mergesort(a,middle+1,last);
    merge(a,first,middle,last);
 }
}
void merge(int a[30],int first,int middle,int last)
{
   int i,j,k,n1,n2;
   n1=middle;
   n2=last-middle;
   int t[n1],r[n2];
   for(i=0;i<=n1;i++)
   {
      t[i]=a[i];
   }
   for(j=0;j<=n2;j++)
   {
      r[j]=a[i];
      i++;
   }
   i=0;
   j=0;
   k=first;
   while(i<=n1&&j<n2)
   {
       if(t[i]<=r[j])
       {
           a[k]=t[i];
           i++;
       }
       else
       {
           a[k]=r[j];
           j++;
       }
       k++;
   }
   while(i<=n1)
   {
     a[k]=a[i];
     i++;
     k++;
   }
    while(i<=n2)
   {
     a[k]=a[j];
     j++;
     k++;
   }
}

