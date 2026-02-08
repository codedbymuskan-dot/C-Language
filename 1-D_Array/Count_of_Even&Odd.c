

//-----Count of Even and Odd number in Array of 10 inputs-----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,ev=0, odd=0;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a number: ");
        scanf("%d", &arr[i]);

    }
    for(i=0;i<=9;i++)
    {
        if(arr[i]%2==0)
        {
            ev++;
        }
        else
        {
            odd++;

        }
        
    }
    printf("\n Count of Total Even numbers is %d ",ev);
    printf("\n Count of Total Even numbers is %d ",ev);
    return 0;
}