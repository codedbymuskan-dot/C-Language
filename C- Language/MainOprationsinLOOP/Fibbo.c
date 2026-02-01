

//-----Fibonacci Series-----//
#include<stdio.h>
int main()
{
     int lmt, a,b,c;
     printf("\n Enter value of a : ");
     scanf("%d", &a);
     printf("\n Enter value of b: ");
     scanf("%d", &b);
     printf("Enter The Limit of this series: ");
     scanf("%d", &lmt);
     c=a+b;
     printf("\n%d\t%d",a,b);
     while(c <=lmt)
     {
          printf("\t%d",c);
          a=b;
          b=c;
          c=a+b;
     }
     return 0;
}