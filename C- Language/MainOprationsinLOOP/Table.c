

//--------TABLE---------//
#include<stdio.h>
int main()
{
     int ans,num,i;
     printf("\n Enter value of num: ");
     scanf("%d", &num);
     printf("\n========================================");
     printf("\n\t\tTABLE\t\t");
     printf("\n========================================");
    for(i=1;i<=10;i++)
     {
          ans=num*i;
          printf("\n\t%d * %d = %d",num,i,ans);

     }
     return 0;

}

