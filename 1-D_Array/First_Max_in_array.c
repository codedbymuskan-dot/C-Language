

//----Second Maximum number from Array of 10 inputs----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i , max1=0,max2=0;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a number :");
        scanf("%d",&arr[i]);
        if(i==0)
        {
            max1 =arr[i];
        }
        else if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];

        }
        else if (arr[i]>max2)
        {
            max2=arr[i];
        }

    }
    printf("\n Second Maximum number is %d",max2);
    return 0;
}