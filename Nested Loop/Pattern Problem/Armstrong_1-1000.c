

//-----All ArmStrong Numbers Between 1-1000-----//
#include<stdio.h>
int main()
{
    int i,j, mult, dgt, sum, num, num2 ,ct;
    for(i=1;i<=1000;i++)
    {
        num=i;
       num2=num;
        ct=0;
        sum=0;
        // coount number of digits
        while(num!=0)
        {
            num=num/10;
            ct++;
        }
        num=num2;
        
// calculating Armstrong sum

            while(num!=0)
            {
            dgt=num%10;
             mult=1;
            
             for(j=1;j<=ct;j++)
             {
                mult=mult*dgt;
              }
         sum=sum+mult;
        num=num/10;
        }
        
    
    
        if(sum==num2)
        {
            printf("Armstrong Number : %d\n",num2);
        }
    } 
    return 0;
}
    