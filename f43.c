/*write a c program to delete a particular key or value in the string*/
#include<stdio.h>
#include<string.h>
int main()
{

    char s[100];
    int j;
    printf("enter a string:");
    fgets(s,100,stdin);
    printf("enter the index:");
    scanf("%d",&j);
    int l=strlen(s);
    for(int i=j;i<l;i++)
    {
    s[i]=s[i+1];
    }
    printf("%d",l);
    puts(s);
    return 0;
    }
