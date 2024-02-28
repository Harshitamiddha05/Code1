/* write a c program to insert elements in 2d array and sort this 2d array in ascending order by passing array as an argument in function*/
#include<stdio.h>
int main()
{
int k=0,temp=0,i,j,a[3][3],b[9];
printf("enter the elements:");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n");
printf("2d array:");
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
printf(" ");
}
printf("\n");
}
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[k++]=a[i][j];
}
}
printf("1d array:\n");
for(k=0;k<9;k++)
{
printf("%d",b[k]);
printf(" ");
}
printf("\n");
for(i=0;i<9;i++)
{
for(j=0;j<(8-i);j++)
{
if(b[j]>b[j+1])
{
temp=b[j];
b[j]=b[j+1];
b[j+1]=temp;
}
}
}
printf("\n");
printf("sorted 1d array:\n");
for(i=0;i<9;i++)
{
printf("%d",b[i]);
printf(" ");
}
printf("\n");
k=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
a[i][j]=b[k];
k++;
}
}
printf("\n");
printf("sorted 2d array:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
printf(" ");
}
printf("\n");
}
return 0;
}
