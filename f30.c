/*write a c program to swap two variable just by values */
#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a and b:");
scanf("%d%d",&a,&b);
printf("value of a and b before swapping:a=%d,b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a and b after swapping:a=%d,b=%d\n",a,b);
return 0;
}
