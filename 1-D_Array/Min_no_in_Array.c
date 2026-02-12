

//----Minimum no. from Array of 10 inputs-----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,min=0;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a number: ");
        scanf("%d",&arr[i]);
        if(i==0)
        {
            min=arr[i];

        }
        else if ( arr[i]<min)
        {
            min=arr[i];
        }
        

    }
    printf("\n Minimum number is %d ",min);
}