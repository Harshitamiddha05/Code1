/*write a c program to swap values of two variables using pointers*/
#include<stdio.h>
int main()
{
int *p,a,b,*p1,*p2;
printf("enter value of a and b:");
scanf("%d%d",&a,&b);
printf("values of a and b before swapping:a=%d,b=%d\n",a,b);
p=&a;
p1=&b;
p2=p1;
p1=p;
p=p2;
printf("values of a and b after swapping:a=%d,b=%d\n",*p,*p1);
return 0;
}
