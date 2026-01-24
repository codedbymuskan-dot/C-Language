#include<stdio.h>
int main()
{
   int ans,i,num;
   printf("\n Enter a number: ");
  scanf("%d", &num);
   for(i=1;i<=num;i++)
   {
    ans=i*ans;
  }
printf("\n The Factorial of this number is %d", ans);
  return 0;
}
