

//-----Average of All even number of Array of 10 inputs-----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,ev=0,avg=0,sum=0;
    for(i=0;i<=9;i++)
    {
        printf("\n enter a number: ");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            ev++;
            sum=sum+arr[i];

        }
    }
    avg = sum/ev;
    printf("\n Average of all Even numbers is %d",avg);
    return 0;
}
    