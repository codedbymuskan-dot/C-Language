
/*
*
**
***
****
*****
*/
/*
#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)

    {
        for(c=1;c<=r;c++)
        {
            printf("*");

        }
        printf("\n");
    }
    
}
    */




/*
12345
1234
123
12
1
*/
/*
#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=6-r;c++)
        {
            printf("%d", c);
        }
        printf("\n");
    
    }
}
*/

/*
1
12
123
1234
12345
*/
/*
#include<stdio.h>
int main()
{
    int r,c;
   
    for(r=1;r<=5;r++)
    {   k=1;
        for(c=1;c<=r;c++)
        {
            printf("%d", c);
          

        }
        printf("\n");
    }
    return 0;
}
*/


/*
1
22
333
4444
55555
*/
/*
#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
    return 0;
}
    */
/*
1
23
456
78910
1112131415

*/
/*
#include<stdio.h>
int main()
{
    int r,c,k=1;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
    */
/*
*****
****
***
**
*
*/
/*
#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=6-r;c++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
    */
/*
12345
1234
123
12
1
*/
/*
#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=6-r;c++)
        {
            printf("%d",c);

        }
        printf("\n");
    }
}
    */

/*
12345
6789
101112
1314
15
*/
/*
#include<stdio.h>
int main()
{
    int r,c,k=1;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=6-r;c++)
        {   
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
    */
/*
1
10
101
1010
10101
*/
/*
#include<stdio.h>
int main()
{

    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {   
            if(c%2==0)
            {
            printf("0");
            }
            else{
                printf("1");
            }

        }
        printf("\n");

    }
    return 0;
}
    */
/*
54321
5432
543
54
5
*/
/*
#include<stdio.h>
int main()
{
    int r,c,k;
    for(r=1;r<=5;r++)
    {   k=5;
        for(c=1;c<=6-r;c++)
        {
            printf("%d",k);
            k--;

        }
        printf("\n");

    }
    return 0;
}
    */
/*
54321
4321
321
21
1
*/
/*
#include<stdio.h>
int main()
{
    int r,c,k;
    for(r=1;r<=5;r++)
    {   k=6-r;
        for(c=1;c<=6-r;c++)
        {
            printf("%d", k);
            k--;
        }
        printf("\n");
    }
    return 0;
}
    */
/*
A
AB
ABC
ABCD
ABCDE
*/
/*
#include<stdio.h>
int main()
{
    int r,c,k;
    for(r=1;r<=5;r++)
    {    k=65;
        for(c=1;c<=r;c++)
        {
              printf("%c",k);
              k++;
        }
        printf("\n");
    }
    return 0;
}
*/
/*
ABCDE
ABCD
ABC
AB
A
*/
/*
#include<stdio.h>
int main()
{
    int r,c,k;
    for(r=1;r<=5;r++)
    {   k=65;
        for(c=1;c<=6-r;c++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
    */
/*
ABCDE
BCDE
CDE
DE
E
*/
/*
#include<stdio.h>
int main()
{
    int r,c,k;
    for(r=0;r<=4;r++)
    {
        k=65;
        for(c=1;c<=5-r;c++)
        {
            printf("%c",k+r);
            k++;
        }
        printf("\n");
    }
    return 0;
}
    */
/*
EDCBA
DCBA
CBA
BA
A
*/
/*
#include<stdio.h>
int main()
{
    int r,c,k;
     k=65+4;
    for(r=1;r<=5;r++)
    {  
        for(c=1;c<=6-r;c++)
        {
            printf("%c",k-r);
            
        }
        printf("\n");
    }
    return 0;
}
//ERRROOROROROOEOEOOEOROOEOEOEOOEOE
*/
/*
      *
     * *
    * * * 
   * * * *
  * * * * *
*/
/*
#include<stdio.h>
int main()
{
    int r ,c ,sp;
    for(r=1;r<=5;r++)
    {
        for(sp=1;sp<=5-r;sp++)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}
    */
/*
 * * * * *
  * * * *
   * * *
    * *
     *
*/
/*
#include<stdio.h>
int main()
{
    int r,c,sp;
    for(r=1;r<=5;r++)

    {
        for(sp=1;sp<r;sp++)
        {
            printf(" ");
        }
        for(c=1;c<=6-r;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
    */
/*
        A
      A  B
    A  B  C
  A  B  C  D
A  B  C   D  E
*/
/*
#include<stdio.h>
int main()
{
    int r,c,sp,k;
    for(r=1;r<=5;r++)
    {   k=65;

        for(sp=1;sp<=6-r;sp++)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%c ",k);
            k++;
        }
        printf("\n");

    }
    return 0;
}
    */
/*

*/
//ONLY FOUR QUESTIONS ARE REMAINING