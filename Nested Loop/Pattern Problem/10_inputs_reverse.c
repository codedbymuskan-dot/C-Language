

//------Printing Rverse of 10 inputs------//
#include<stdio.h>
int main()
{
     int num,num2,dgt,rev,i,j;
     for(i=1;i<=10;i++)
     {
        printf("\n Enter  a Number : ");
        scanf("%d",&num);
        num2=num;
         num=num2;
         rev=0;
         while(num!=0)
         {
         dgt=num%10;
         rev=(rev*10)+dgt;
         num=num/10;
         }
         num=num2;
         printf("\n Reverse of %d is %d",num,rev);
        }
    //  }
     return 0;
}