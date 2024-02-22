/* write a recursive code to print gcd of two number*/
#include<stdio.h>
int gcd(int,int);
int main()
{
int dd,dv,res;
printf("enter two numbers:");
scanf("%d%d",&dd,&dv);
res=gcd(dd,dv);
printf("%d",res);
return 0;
}
int gcd(int dd,int dv)
{
int rem=0;
rem=dd%dv;
if(rem==0)
return dv;
else
return(gcd(dv,rem));
}
