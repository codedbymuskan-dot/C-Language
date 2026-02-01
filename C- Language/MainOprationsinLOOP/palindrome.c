
//----Palindrome no.----//
#include<stdio.h>
int main()
{
      int dgt,rev=0,num,num2;
      printf("\n Enter  the Number: ");
      scanf("%d", &num);
      num2=num;
      while(num!=0)
      {
          dgt=num%10;
          rev=(rev*10)+dgt;
          num=num/10;
      }
      if(rev==num2)
      {
          printf("\n The number is a Palindrome Number");
      }
      else
      {
          printf("\n This number is not a Palindrome number");
      }
      return 0;
}