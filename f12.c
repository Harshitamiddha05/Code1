/* write a c program in c to read n number of values in an array and display them in reverse order*/
#include<stdio.h>
int main()
{
int n,i,a[40];
printf("enter the limit of array:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
/*for(i=0;i<n;i++)
{
printf("%d",a[i]);
}*/
for(i=n-1;i>=0;i--)
{
printf("%d",a[i]);
}
printf("\n\n");
return 0;
}
