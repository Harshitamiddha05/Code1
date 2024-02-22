/*write a c code to find sum of all elements of each row of a matrix*/
#include<stdio.h>
int main()
{
int r,c,j,i,a[40][40];
printf("enter the row and column of a 2d array:");
scanf("%d%d",&r,&c);
printf("enter the elements:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
int sum=0;
for(j=0;j<c;j++)
{
printf("%d",a[i][j]);
sum+=a[i][j];
}
printf("=%d",sum);
printf("\n");
}
return 0;
}
