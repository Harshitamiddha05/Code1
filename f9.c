/* write a c program to read a matrix and print it's diagonal*/
#include<stdio.h>
int main()
{
int r,c,i,j,a[10][10];
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
if(r==c)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
{
printf("%d",a[i][j]);
}
else
{
printf("\t");
}
}
printf("\n");
}
}
else
{
printf("matrix is not a square matrix");
}
}
return 0;
}
