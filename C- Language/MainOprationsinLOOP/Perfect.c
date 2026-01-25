
//-----PERFECT OR NOT----//
#include<stdio.h>
int main()
{

     int i,num, sum=0 ;
     printf("\n Enter the number:");
     scanf("%d", &num);
     for(i=1;i<num;i++)
     {
           if(num%i==0)
           {
               sum=sum+i;
           }

     } 
     if(sum==num)
     {
          printf("\n The number is a Perfect number");

     }
     else
     {
          printf("\n The number is not a Perfect number");
     }
     return 0;
}