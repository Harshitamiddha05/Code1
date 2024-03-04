/*write a c program to insert elements of two different strings and merge or concatenate these two strings and display the content*/
#include<string.h>
#include<stdio.h>
int main()
{
char str[100],str1[100],concatestr[300];
int i,j,l,l1;
printf("input a string:");
fgets(str,100,stdin);
printf("\n");
printf("input 2nd string:");
fgets(str1,100,stdin);
printf("\n");
l=strlen(str);
/*if(str[l-1]=='\n')
{
str[l-1]='\0';
}*/
l1=strlen(str1);
if(str1[l1-1]=='\n')
{
str1[l1-1]='\0';
}
for(int i=0;str[i]!='\0';i++)
{
concatestr[i]=str[i];
}
for(int j=0;str1[j]!='\0';j++)
{
concatestr[i+j]=str1[j];
}
concatestr[i+j]='\0';
printf("String 1:%s\n",str);
printf("String 2:%s\n",str1);
printf("concatenated string:%s\n",concatestr);
return 0;
}
