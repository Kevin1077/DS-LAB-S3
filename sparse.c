#include<stdio.h>
void main()
{
  int row,col,i,j,a[30][30],count=0,k=1;
  printf("Enter the row and column of the sparse matrix:\n");
  scanf("%d%d",&row,&col);
  printf("Enter values in the sparse matrix\n");
  for(i=0;i<row;i++){
     for(j=0;j<col;j++){
       scanf("%d",&a[i][j]);
     }
  }
  
  struct sparse{
        int row1,col1,value;
  }s[30];
  
        for(i=0;i<row;i++){
           for(j=0;j<col;j++){
                if(a[i][j]!=0){
                   s[k].row1=i;
                   s[k].col1=j;
                   s[k].value=a[i][j];
                   count++;
                   k++;
                }
           }
        }
        
        s[0].row1=row;
        s[0].col1=col;
        s[0].value=count;
        printf("row\tcolumn\tvalues\n");
        for(i=0;i<k;i++){
            printf("%d\t%d\t%d\n",s[i].row1,s[i].col1,s[i].value);
        }
}
