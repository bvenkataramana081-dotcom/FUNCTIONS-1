//multiplication table using fumntion 

#include<stdio.h>

int table(int a);

int main ()
{
    int n;
    printf("Enter Number = ");
    scanf("%d",&n);
    table(n);
    
    return 0;
}
int table(int a)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
        
    }
  
}