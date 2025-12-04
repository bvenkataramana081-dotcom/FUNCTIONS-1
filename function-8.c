//reverse string
#include<stdio.h>
#include<string.h>
void name(char s);

int main ()
{
    int n;
    printf("Enter number = ");
    scanf("%d",&n);
  
    //function call
    name(n);
    return 0;
}
void name(char n)
{
    char s[n];
    printf("Enter Your Name = ");
    scanf("%s",&s);
   
    printf(" REVERSE STRING = %s",strrev(s));
}
