#include<stdio.h>
int dupli(int[],int);
int main()
{
int r,n,i,j;
printf("enter the range of array:");
scanf("%d",&n);
int a[n];
printf("enter the elements of array:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
r=dupli(a,n);
if(r)
{
printf("the array doesn't contain duplicate elements");
}
else
{
printf("the array contain duplicate elements");
}
return 0;
}
int dupli(int a[],int n)
{
int count=0,i,j;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
}
}
}
if(count>1)
{
return 1;
}
else
{
return 0;
}
}
