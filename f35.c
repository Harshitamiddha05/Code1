/*write a c program to merge two different strings in case they are palindrome or in case they are equal then merge these two strings*/
#include<stdio.h>
#include<string.h>
int palindrome(char s[])
{
int l=strlen(s);
int c=0,l1=l-2;
while(c<l1)
{
if(s[c]!=s[l1])
return 0;
c++;
l1--;
}
return 1;
}
int compare(char s1[],char s2[])
{
int f=0,i=0,j=0;
while(s1[i]!='\0'&& s2[j]!='\0')
{
if(s1[i]!=s2[j])
f++;
i++;
j++;
}
if(f==0&&s1[i]=='\0'&&s2[j]=='\0')
return 1;
else
return 0;
}
void concatenate(char s1[],char s2[],char concatestr[])
{
int i=0,j=0,l2=strlen(s1),l3=strlen(s2);
if(s1[l2-1]=='\n'&&s2[l3-1]=='\n')
{
s1[l2-1]='\0';
s2[l3-1]='\0';
}
while(s1[i]!='\0')
{
concatestr[i]=s1[i];
i++;
}
while(s2[j]!='\0')
{
concatestr[i+j]=s2[j];
j++;
}
concatestr[i+j]='\0';
}
int main()
{
char s1[100],s2[100],concatestr[200];
printf("enter a string:");
fgets(s1,100,stdin);
printf("enter 2nd string:");
fgets(s2,100,stdin);
if (palindrome(s1)&&palindrome(s2))
{
concatenate(s1,s2,concatestr);
printf("concatenate string:%s",concatestr);
}
else if(compare(s1,s2)==1)
{
concatenate(s1,s2,concatestr);
printf("merged strings:%s",concatestr);
}
else
printf("strings are not palindrome or equal");
return 0;
}
