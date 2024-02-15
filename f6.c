/*write a c program to input elements in 2d array and display the content of inputted array */
#include<stdio.h>
int main()
{
int a[10][10],i,j,r,c;
printf("enter rows and columns of 2d array:");
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
printf("%d",a[i][j]);
printf(" ");
}
printf("\n");
}
return 0;
}
