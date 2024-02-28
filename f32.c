/*write a c program to add two number by using pointers and also perform subtraction,multiplication and division*/
#include<stdio.h>
int main()
{
int *p,*p1,a,b;
printf("enter value of a and b:");
scanf("%d%d",&a,&b);
p=&a;
p1=&b;
printf("addition of a and b:%d\n",(*p + *p1));
printf("multiplication of a and b:%d\n",(*p * *p1));
printf("subtraction of a and b:%d\n",(*p-*p1));
printf("division of a and b:%d\n",(*p / *p1));
return 0;
}
