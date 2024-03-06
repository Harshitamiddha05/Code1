/*write a c program to insert a string from user and arrange it in ascending and descending order*/
#include<stdio.h>
#include<string.h>
int descending(char s[],int l)
{
int temp,i,j;
for(i=0;i<l-1;i++)
{
for(j=0;j<l-i-1;j++)
{
if(s[j]<s[j+1])
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}
}
}
int ascending(char s[],int l)
{
int temp,i,j;
for(i=0;i<l-1;i++)
{
for(j=0;j<l-i-1;j++)
{
if(s[j]>s[j+1])
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}
}
}
int main()
{
char s[100];
int l;
printf("Input a string:");
fgets(s,100,stdin);
l=strlen(s);
ascending(s,l);
printf("string sorted in ascending order:");
puts(s);
descending(s,l);
printf("string sorted in descending order:");
puts(s);
return 0;
}
