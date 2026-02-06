


//-----Sum of digits of each number-----//
#include<stdio.h>
int main()
{
    int i,dgt,sum,num , num2;;
    for(i=1;i<=10;i++)
    {
        printf("\n Enter a Number: ");
        scanf("%d",&num);
        num2=num;
        sum=0;
        while(num!=0)
        {
            dgt=num%10;
            sum=sum+dgt;
            num=num/10;

        }
        num=num2;
        printf("\n Sum of all the Digits of %d is %d",num,sum);

    }
    return 0;

}