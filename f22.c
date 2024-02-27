/*write a c program to enter a string and display the content of string*/
#include<stdio.h>
#include<string.h>
int main()
{
char s1[20],i;
printf("enter a string:");
fgets(s1,20,stdin);
puts(s1);
return 0;
}
