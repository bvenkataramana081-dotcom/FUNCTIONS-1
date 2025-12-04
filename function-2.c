//function 
#include<stdio.h>
int even(int n);

int main ()
{
   int n;
   printf("enter number : ");
   scanf("%d",&n);
   even(n);
    return 0;
}
int even(int n)
{
    if(n%2 == 0)
    {
        printf(" 1 ");
    }
    else
    {
        printf(" 0 ");
    }
}

