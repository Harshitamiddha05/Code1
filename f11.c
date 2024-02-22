/*write a c program to find the frequency of even number in matrix*/
#include<stdio.h>
int main()
{
int r,c,j,i,a[40][40],evenfrequency=0;
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
if(a[i][j]%2==0)
{
evenfrequency++;
}
else{
printf("%d",a[i][j]);
}
}
printf("\n");
}
printf("%d is the even number frequency ",evenfrequency);
return 0;
}
