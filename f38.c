/*write a c program to insert string from user and convert it in lower case*/
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
if(s[i]>=65&&s[i]<=90)
{
s[i]+=32;
}
i++;
}
printf("new string , converted to lower case\n");
puts(s);
return 0;
}
