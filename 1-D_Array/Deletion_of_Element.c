

//=======Deletion=====//
#include<stdio.h>
int main()
{
    int arr[10];
    int i,value,pos=-1;
    for(i=0;i<=9;i++)
    {
        printf("\n enter a number: ");
        scanf("\n %d",&arr[i]);
    }
    printf("\n Enter value to delete: ");
    scanf("%d",&value);
   
    for(i=0;i<=9;i++)
    {
        if(arr[i]==value)
        {
            pos=i;
            break;
        }
    }
    if (pos==-1)
    {
        printf("\n No Data Found");

    }
    else
    {
        for(i=pos;i<=9;i++)
        {
            arr[i]= arr[i+1];
        }

    }
    printf("\n Final Array After Deletion");
    for(i=0;i<=8;i++)
    {
        printf("\n %d ",arr[i]);
      
    }
    return 0;
}
