

//------reverse of number-----//
#include <stdio.h>
int main()
{ 
     int rev=0,dgt,num;
     printf("\n Enter a Number: ");
     scanf("%d", &num);
     while(num!=0)
     {
          dgt=num%10;
          rev=(rev*10)+dgt;
          num=num/10;
     }
     printf("\n reverse is %d", rev);
     return 0;

}