

//----Maximum Number from Array of 10 inputs-----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,max=0;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a number: ");
        scanf("%d",&arr[i]);
        if(i==0)
        {
            max=arr[i];
        }
        else if (arr[i]>max)
        {
            max=arr[i];
        }
    }
  printf("\n Maximum Number is %d",max);
  return 0;
}