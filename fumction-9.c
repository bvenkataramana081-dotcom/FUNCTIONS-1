#include<stdio.h>
int number(int n);

int main ()
{
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    //function call
    number(n);
   
    return 0;
}
int number(int n)
{
    int j,sum=0,k=1;
    char ch[n];
    printf("Enter your string = ");
    for(int i=0;i<n;i++)
    {
        scanf("%s", &ch[i]);
    }
    for(j=0;j<n;j++)
    {
       if(ch[j] == 'a' || ch[j] == 'e'|| ch[j] == 'i'||ch[j] == 'o'||ch[j] == 'u') 
        {
           sum = sum+k;
        }
       
    }
    printf("vowels = %d",sum);
}