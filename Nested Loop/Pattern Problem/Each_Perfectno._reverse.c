

//------Reverse of Each Perfect Number Between 1-1000--------//
#include<stdio.h>
int main()
{
   int i,j,sum1=0,temp2,num2,dgt,rev=0,num;
   for(i=1;i<=1000;i++)
   {
      sum1=0;
      num=i;
      num2=num;
      rev=0;
      for(j=1;j<num;j++)
      {
        if(num%j==0)
        {
            sum1=sum1+j;
        }

      }
      
      if(sum1==num2)
      {  temp2=num2;
        while(num2!=0)
        {
        dgt=num2%10;
        rev=(rev*10)+dgt;
        num2=num2/10;
        }
       

   
   printf("\n Reverse of Perfect number %d is %d",temp2,rev);
    }
    }
   return 0;

}