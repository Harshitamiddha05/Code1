/*write a program in c to find sum of all the elements in array*/
#include<stdio.h>
int main()
{
int n,i,a[40],sum=0;
printf("enter the limit of array:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
printf("%d",sum);
return 0;
}
