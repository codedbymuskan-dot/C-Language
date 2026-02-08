


//----Count of All Positive,Negative numbersand Zeros  from an Array-----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,pos=0,neg=0,ze=0;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a number: ");
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            pos++;

        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else 
        {
            ze++;
        }
    }
    printf("\n Count of all Positive nummbers is %d",pos);
    printf("\n Count of all Negative nummbers is %d",neg);
    printf("\n Count of all Zero  is %d",ze);

}
    