/*write a c program to initialize different pointers(int,double,float,char) and print their values
1.print the address of variable
2.print the value of variable
3.print the pointers*/
#include<stdio.h>
int main()
{
int *p,a=5;
float *q,w=5.9;
double *r,t=318;
char *o,u='r';
p=&a;
q=&w;
r=&t;
o=&u;
printf("%p\n",p);//print the address of variable or print the pointer
printf("%d\n",*p);//print the value of variable
printf("%p\n",q);//print the address of variable or print the pointer
printf("%f\n",*q);//print the value of variable
printf("%p\n",r);//print the address of variable or print the pointer
printf("%lf\n",*r);//print the value of variable
printf("%p\n",o);//print the address of variable or print the pointer
printf("%c\n",*o);//print the value of variable
return 0;
}
