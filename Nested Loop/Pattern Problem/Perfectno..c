
// Que-1:
//-------ALL Perfect Numbers Between 1-1000-------//
#include<stdio.h>
int main()
{
    int sum,j, num,i;
    for(i=1;i<=1000;i++)
    {
        num=i;
        sum=0;
        for(j=1;j<num;j++)
        {
           if(num%j==0)
           {
            sum=sum+j;
           }
        }
        if(sum==num)
        {
            printf("\n %d",num);
        }
    }
}
