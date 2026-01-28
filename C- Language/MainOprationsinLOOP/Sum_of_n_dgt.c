

//----SUM of n DIGIT-----//
#include<stdio.h>
int main()
{ 
      int sum=0,num,dgt;
      printf("\n Enter The number: ");
      scanf("%d",&num);
      while(num!=0)
      {
          dgt=num%10;
          sum=sum+dgt;
          num=num/10;

      }
      printf("\n Sum of All the Digits of  this number is %d", sum);
      return 0;
}