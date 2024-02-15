/* write a c program to input elements in two 2d array find their sum of these two 2d array and store it in 3rd array*/
#include<stdio.h>
int main()
{
int a[10][10],a1[10][10],b[10][100],i,j,r,c,r1,c1;
printf("enter rows and columns for 1st 2d array:");
scanf("%d%d",&r,&c);
printf("enter the elements:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter rows and columns for 2nd 2d array:");
scanf("%d%d",&r1,&c1);
printf("enter the elements:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a1[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[i][j]=a[i][j]+a1[i][j];
}
}
for(i=0;i<c;i++)
{
for(j=0;j<r1;j++)
{
printf("%d",b[i][j]);
printf(" ");
}
printf("\n");
}
return 0;
}
