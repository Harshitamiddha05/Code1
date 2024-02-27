/*write a c program to display the length of the string,enter the string by user with the help of inbuilt function*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
int i=0,count=0;
printf("enetr a string:");
fgets(s,20,stdin);
while(s[i]!='\0')
{
count+=1;
i++;
}
printf("%d is the length of string",count-1 );
return 0;
}
