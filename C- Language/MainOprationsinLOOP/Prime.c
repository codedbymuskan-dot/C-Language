

//-----PRIME OR NOT-----//
#include<stdio.h>
int main()
{
     int i,num,flag=0;
     printf("\n Enter the number: ");
     scanf("%d",&num);
     for(i=2;i<num;i++)
     {
          if(num%i==0)
          {
                flag=1;
          }

     }
     if (flag==0)
     {
          printf("\n The number is Prime number");

     }
     else
     {
          printf("\n The number is not a Prime number");
     }
     return 0;

}