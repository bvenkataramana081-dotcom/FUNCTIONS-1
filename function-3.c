//area of circle
#include<stdio.h>
float circle(float n);

int main ()
{
    float n;
   printf("enter number = ");
   scanf("%f",&n);
   
   float sum =  circle(n); //function call
   printf("area of circle = %.2f ",sum);


    return 0;
}
float circle(float n)
{
   int sum,add;
   sum = 3.14*n*n;
   
   return sum;
}