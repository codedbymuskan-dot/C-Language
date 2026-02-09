

//----Finding First Even from Array of 10 inputs----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,even,flag=1;
    for(i=0;i<=9;i++)
    {
        printf("\n enter a number: ");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0 && flag==1)
        {
            even=arr[i];
            flag++;
      
        }    
       
    }
    
    printf("\n First even number is %d",even);
    return 0;
}