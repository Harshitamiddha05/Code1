/*write a recursive code to print factorial of a number*/#include<stdio.h>
# include<stdio.h>
int fact(int);
int main()
{
int n, res;
printf("enter a number:");
scanf("%d",&n);
res=fact(n);
printf("%d",res);
return 0;
}
int fact(int n)
{
if(n==0)
return 1;
else
return (n*fact(n-1));
}
