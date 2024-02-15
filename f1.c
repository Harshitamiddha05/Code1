/*write a c program to find sum of digits of each elements of an array using function*/
#include<stdio.h>
void func(int[],int);
int main()
{
int n,a[10],i;
printf("input the range of array:");
scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
func(a,n);
return 0;
}
void func(int a[],int n)
{
int i,s=0,r,b;
for(i=0;i<n;i++)
{
r=a[i];
while(r!=0)
{
b=r%10;
s=s+b;
r=r/10;
}
 printf("sum of %d is %d\n",i+1,s);
s=0;
}
}
