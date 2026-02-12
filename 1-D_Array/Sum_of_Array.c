

//------Sum of an Array of 10 Numbers-----//
#include<stdio.h>
int main()
{
     int arr[10];
     int i,sum=0;
     for(i=0;i<=9;i++)
     {
         printf("\n Enter a number: ");
         scanf("%d",&arr[i]);
         sum=sum+arr[i];
     }
     printf("\nSum is %d",sum);
     return 0;
}
