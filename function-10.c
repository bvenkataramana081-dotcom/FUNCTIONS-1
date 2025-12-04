#include<stdio.h>
int power(int a,int b);

int main ()
{
    int a,b;
    printf("Enter base = ");
    scanf("%d",&a);
    printf("Enter exponest = ");
    scanf("%d",&b);
    power(a,b);

    return 0;
}
int power(int a,int b)
{
    int result=1;
    for(int i=1;i<=b;i++)
    {
        
        result = result*a;
 
    }
    printf("result = %d ",result);
}
