#include <stdio.h>
int main()
{
    int a=0,b=1,n,i=1,f;
    printf("enter how many terms of fibonachi series you want");
    scanf("%d",& n);
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d\t%d",a,b);
    }
    else if(n<=0)
    {
        printf("print appropriate no");
    }
    else if(i<=n-1)
    {
        printf("%d\t%d\t",a,b);
        jump_here:
        if(i<=(n-2))
        {
            f=a+b;
            a=b;
            b=f;
            printf("%d\t",f);
            i+=1;
            goto jump_here; 
        }
    } 
    else
    {
        printf("\nyour fibbonachi series is over");
    }   
    return 0;
}