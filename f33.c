/*write a c program to insert elements in an array and print the content of array using pointers*/
#include<stdio.h>
int main()
{
int n,a[100],*p,i;
printf("enter a number:");
scanf("%d",&n);
p=a;
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
printf("%d",*(p+i));
printf(" ");
}
return 0;
}
