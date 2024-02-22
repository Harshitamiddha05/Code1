/*write a program using function to print nth element of fibonacci series  using recursion*/
#include<stdio.h>
int fibo(int);
int main()
{
int n,r;
printf("enter the limit of array:");
scanf("%d",&n);
r=fibo(n);
printf("the %d element of fibonacci series is %d ",n,r);
return 0;
}
int fibo(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (fibo(n-1)+fibo(n-2));
}
