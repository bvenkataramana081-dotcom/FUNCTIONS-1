//add three number 
#include<stdio.h>
int number(int a,int b,int c);

int main ()
{
    
    int a,b,c;
    printf("Enter first Number = ");
    scanf("%d",&a);
    printf("Enter secound Number = ");
    scanf("%d",&b);
    printf("Enter third Number = ");
    scanf("%d",&c);

    //function call 
    int  total = number(a,b,c);
    printf("total = %d",total);

    return 0;
}
int number(int a,int b,int c)
{
    int total;
    total = a+b+c;
    return total;
}
