

//Que-2:
//-------All Prime No. Between 1-1000-------//
#include<stdio.h>
int main()
{
    int flag=0,i,j,num;
   
    for(i=1;i<=1000;i++)
    {   flag=0;
        num=i;
        for(j=2;j<num;j++)
        {
           if(num%j==0)
           {
            flag=1;
            break;
           }

        }
        if(flag==0)
        {
            printf("\n %d",j);
        }

    }
    return 0;
}
