

//----Searching an Element from 1-D Array-----//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,value,pos=-1;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a Number: ");
        scanf("%d",&arr[i]);

    }
    printf("\n Enter  value to search: ");
    scanf("%d",&value);
    for(i=0;i<=9;i++)
    {
        if(arr[i]==value)
        {
            pos=i+1;
            break;
        }

    }
    if(pos == -1)
    {
        printf("\n No Data Found");
    }
    else 
    {
        printf("\n Successfullly This  data :- %d  Found At %d",arr[i],pos);

    }
    return 0;
}