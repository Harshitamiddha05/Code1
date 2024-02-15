/*write a c program to find factorial of a number using recursion (number should be greater than 25)*/
 #include<stdio.h>
 long double  factorial(int);
 int main()
 {
 int n,s;
 printf("enter the number:");
 scanf("%d",&n);
 s=factorial(n);
 printf("%d is the factorial of %d",s,n);
 return 0;
 }
 long double factorial(int n)
 {
 if (n==0)
 {
 return 1;
 }
 else
 {
return(n*factorial(n-1));
 }
 return 0;
 }
