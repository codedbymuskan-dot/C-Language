

      
//----Power---//
#include<stdio.h>
int main()
{
      int ans=1, base,expo,i;
      printf("\n Enter Base : ");
      scanf("%d", &base);
      printf("\n Enter value of exponent: ");
      scanf("%d", &expo);
      for(i=1;i<=expo;i++)
      {
          ans=base*ans;
     }
      printf("\n Power is %d ", ans);

      return 0;

}