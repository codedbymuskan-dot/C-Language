

//------Sum of All Prime Numbers Between 1-100------//
#include<stdio.h>
int main()
{
    int i,num,sum=0,flag;
    int j;
    for(i=1;i<=100;i++)
     {  flag=0;
        
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
            sum=sum+j;

        }


    }
    printf("\n Sum of All Prime Numbers Between 1-100 is %d",sum);
    return 0;
}