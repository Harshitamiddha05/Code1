/*write a c program to check whether if each element of an array is palindrome or not just display the count of all palindrome using function*/
#include<stdio.h>
void palin(int[],int );
int main()
{
int n,a[10],i;
printf("enter the range of array:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("enter the numbers:");
scanf("%d",&a[i]);
}
palin(a,n);
return 0;
}
void palin(int a[],int n)
{
int i,c=0,p,d,count=0,b;
for (i=0;i<n;i++)
{
b=a[i];
d=a[i];
while (b!=0)
{
p=b%10;
c=p+(c*10);
b=b/10;
}
if(c==d)
{
count=count+1;
printf("%d is palindrome\n",d);
}
else
{
printf("%d is not a palindrome\n",d);
}
c=0;
}
printf("%d palindromes are present in the array",count);
}
