#include<stdio.h>
void main()
{
int lim,i,j,temp,search,flag=0,count=0;
printf("enter the limit\n");
scanf("%d",&lim);
count++;
int a[lim];
printf("enter the values of array\n");
for(i=0;i<lim;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
for(i=0;i<lim;i++)
{
count++;
for(j=i+1;j<lim;j++)
{
count++;
if(a[i]>a[j])
{
count++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
count+=3;
}
count++;
}
count++;
}
count++;
printf("sorted array:\n");
for(i=0;i<lim;i++)
{
count++;
printf("%d ",a[i]);
count++;
}
count++;
printf("\n");
printf("enter the number to be searched\n");
scanf("%d",&search);
count++;
int left=0,right=lim-1,middle=(left+right)/2;
count+=3;
while(right>=left)
{
count++;
if(a[middle]==search)
{
count++;
flag=1;
count++;
break;
}
else if(search>a[middle])
{
count++;
left=middle+1;
count++;
count++;
middle=(left+right)/2;
}
else if(search<a[middle])
{
count++;
right=middle-1;
count++;
count++;
middle=(left+right)/2;
}
}
count++;
if(flag==1)
{
count++;
printf("the number is present\n");
}
else
{
count++;
printf("the number is not present\n");
}
count+=3;
printf("time complexity=%d\n",count);
printf("space complexity=%d\n",40+(4*lim));

}
