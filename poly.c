#include<stdio.h>
 void main()
 {
   int lim,i;
   printf("Enter the number of terms in the polynomial:\n");
   scanf("%d",&lim);
   
   struct poly{
       int coeff,exp;
       }s[lim];
       
       printf("Enter terms in the polynomial in descending oder of their exponents\n");
       for(i=0;i<lim;i++){
           printf("Enter the coefficiant of %d term\n",i+1);
           scanf("%d",&s[i].coeff);
            printf("Enter the exponent of %d term\n",i+1);
           scanf("%d",&s[i].exp);
       }
       printf("The polynomial is:\n");
       for(i=0;i<lim;i++){
       if(i<lim-1){
          printf("%dx^%d+",s[i].coeff,s[i].exp);
          }
          else{
          printf("%dx^%d\n",s[i].coeff,s[i].exp);
          }
       }
 }
