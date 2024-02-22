/*write a c program to read a matrix and find the product of all elements in 2d array*/
#include<stdio.h>
int main()
{
int r,c,j,i,a[40][40],product=1;
printf("enter the row and column of a 2d array:");
scanf("%d%d",&r,&c);
printf("enter the elements:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
product*=a[i][j];
}
}
printf("%d is the product of the array",product);
return 0;
}

