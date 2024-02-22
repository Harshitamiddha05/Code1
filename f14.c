/*write a c program to copy the elements from one array into another array*/
#include<stdio.h>
int main()
{
int n,i,a[40],a1[40];
printf("enter the limit of array:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
a1[i]=a[i];
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
printf("%d",a1[i]);
}
printf("\n\n");
return 0;
}
