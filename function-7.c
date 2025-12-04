//largest number 
#include<stdio.h>
int largest(int a,int b,int c);

int main ()
{
    int a,b,c;
    printf("Enter Number first = ");
    scanf("%d",&a);
    printf("Enter Number secound = ");
    scanf("%d",&b);
    printf("Enter Number third = ");
    scanf("%d",&c);

    // funcation call
    largest(a,b,c);

    return 0;
}
int largest(int a,int b,int c)
{
    if(a>b)
    {
        printf("A LARGEST %d ",a);
    }
    else if(c<b)
    {
        printf(" B LARGEST %d ",b);
    }
    else
    {
        printf(" C LARGEST %d ",c);
    }

}