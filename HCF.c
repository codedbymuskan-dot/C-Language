

//----HCF of Number -----//
#include<stdio.h>
int main()
{
     int i,start=0,end=0,a,b;
     printf("\n Enter First Number: ");
     scanf("%d", &a);
     printf("\n Enter Second Number: ");
     scanf("%d", &b);
     start=a<b?a:b;
     end=1;
     for(i=start;i>=end;i--)
     {
          if(a%i==0 && b%i==0)
          {
               printf("\n The HCF is %d", i);
               break;
          }
     }
     return 0;

}