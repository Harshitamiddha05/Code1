/*write a c program to find particular key if found return the index*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100],key;
int i=0,flag=0;
printf("enter a string:");
fgets(s,100,stdin);
printf("enter the key:");
scanf("%c",&key);
while(s[i]!='\0')
{
if(s[i]==key)
{
printf("key is found at index:%d\n",i);
flag =1;
}
i++;
}
if(flag==0)
{
printf("key not found");
}
return 0;
}

