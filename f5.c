/* write a c program to find sum of digits of a number using recursion*/
#include<stdio.h>
int sum1(int);
int main()
{
int a,r;
printf("enter a number:");
scanf("%d",&a);
r=sum1(a);
printf("%d is the sum of digits ",r);
return 0;
}
int sum1(int a)
{
int sum=0;
if(a==0)
{
return 0;
}
else
{
return(sum+a%10+sum1(a/10));
}
}
