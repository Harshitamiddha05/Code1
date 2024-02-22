/*write a recursive code to print reverse of a number*/
#include<stdio.h>
int reverse(int)
int main()
{
int n, res;
printf("enter a number:");
scanf("%d",&n);
res=reverse(n);
printf("%d",res);
return 0;
}
int reverse(int n)
{
int rev=0;
if(n==0)
return rev;
else
return ((rev*10)+n%10+reverse(n/10));
}
