

// -------All Palindrome Numbers Between 1-1000----------//
#include<stdio.h>
int main()
{
    int i,dgt,rev,num,num2;
    for(i=1;i<=1000;i++)
    {
        num=i;
        num2=num;
        rev=0;
        while(num!=0)
        {
            dgt=num%10;
            rev=(rev*10)+dgt;
            num=num/10;

        }
        
    
    if(rev==num2)
    {
        printf("\n %d", i);

    }
    
}
return 0;
}