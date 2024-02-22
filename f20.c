/*write a recursive code to print x^y*/
# include<stdio.h>
int power(int,int);
int main()
{
int x,y,res;
printf("enter two number:");
scanf("%d%d",&x,&y);
res=power(x,y);
printf("%d",res);
return 0;
}
int power(int x,int y)
{
if(y==0)
return 1;
else
return (x*power(x,y-1));
}
