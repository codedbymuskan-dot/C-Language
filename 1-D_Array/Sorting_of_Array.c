

//----Sorting---///
#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,temp;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a number: ");
        scanf("%d", &arr[i]);

    }
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n\t///====SORTED ARRAY====///\t\t\t\t");
    for(i=0;i<=9;i++)
    {
        printf("\n %d",arr[i]);
    }
    return 0;
}