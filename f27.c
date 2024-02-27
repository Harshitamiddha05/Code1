/*write a c program to reverse char or string entered by user and check if this reversed string is equal to the original string or not*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100],f=0;
int l=0,i=0,c=0;
printf("Enter a string: ");
fgets(s,100,stdin);
l=strlen(s);
printf("reversed string:");
for(i=0,c=l-1;i<c;i++,c--)
{
if(s[i]==s[c])
f++;
}
if(f==0)
printf("palindrome");
else
printf(" not palindrome");
return 0;
}
