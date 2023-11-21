#include<stdio.h>
void main()
{  int n,i,pos;
   printf("Enter the number of elements in the binary tree:\n");
   scanf("%d",&n);
   int t[n];
   printf("Enter the elements in the tree:\n");
   for(i=1;i<=n;i++)
   {
      scanf("%d",&t[i]);
   }
   printf("Enter position of a node:\n");
   scanf("%d",&pos);
   
   if(2*pos>n)
   {
     printf("%d hs no left child\n",t[pos]);
   }
   else
   {
      printf("Left child of %d is %d\n",t[pos],t[2*pos]);
   }
   if(2*pos+1>n)
   {
     printf("%d hs no right child\n",t[pos]);
   }
   else
   {
      printf("Right child of %d is %d\n",t[pos],t[2*pos+1]);
   }
   if(pos>1&&pos<=n)
   {
     printf("parent of %d is %d\n",t[pos],t[pos/2]);
   }
   else
   {
      printf("%d has no parent\n",t[pos]);
   }
  
}
