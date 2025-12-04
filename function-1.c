//fumction square question

#include<stdio.h>
int squeare(int a);

int main ()
{
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);
    //fumction call
    squeare(a);
   
    return 0;
}
int squeare(int a)
{
    int sum;
    sum = a*a;
    printf("square = %d",sum);
}