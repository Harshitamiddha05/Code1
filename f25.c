/*write a c program to reverse char or string entered by user*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int l= 0, i = 0;
printf("Enter a string: ");
fgets(s,100, stdin);
l=strlen(s);
printf("reversed string:");
for (i=l-1;i>=0; i--)
{
printf("%c",s[i]);
}
return 0;
}
