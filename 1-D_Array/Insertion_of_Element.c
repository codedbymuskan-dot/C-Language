 

 //=====INSERTION=====//
#include<stdio.h>
int main()
{   int arr[10];
    int i,value,yn,pos =-1;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter a number: ");
        scanf("%d",&arr[i]);

    }
    printf("\n  say 1(Yes) or 0 (No) to Add a new Element in this Array: ");
    scanf("%d",&yn);
    if(yn==1)
    {
         printf("\n Enter Value of New Element: ");
         scanf("%d",&value);
         printf("\n Enter Position of New Element: ");
         scanf("%d",&pos);
         for(i=9;i>=pos;i--)
         {
            arr[i+1]= arr[i];
         }
         arr[pos] = value;
         printf("\n Array After insertion");
         for(i=0;i<=9;i++)
         {
            printf("\n %d", arr[i]);
         }
    }
    else
    {
        printf("\n No Worries");
    }
   return 0; 
}