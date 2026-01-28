

//----LCM of NO.----//

#include<stdio.h>
int main()
{
     int i,start=0,end=0,a,b;
     printf("\n  Enter First number: ");
     scanf("%d", &a);
     printf("\n Enter Second number: ");
     scanf("%d", &b);
     if(a>b)
     {
          start=a;
     }
     else{
          start=b;
     }
     end=a*b;
     for(i=start;i<=end;i++)
     {
          if(i%a==0 && i%b==0)
          {
               printf("\n LCM is %d", i);
               break;

          }
          
     }
     return 0;
}