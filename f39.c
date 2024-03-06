/*write a c program to convert the string in upper case*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i=0;
printf("enter a string:");
fgets(s,100,stdin);
while(s[i]!='\0')
{
if(s[i]>=97&&s[i]<=122)
{
s[i]-=32;
}
i++;
}
printf("new string , converted to upper case\n");
puts(s);
return 0;
}
