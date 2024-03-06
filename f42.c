/*write a c program to reverse a string using array as a parameter*/
#include<stdio.h>
#include<string.h>
void reverse_string(char s[],int l)
{
    char temp;
    int start=0,end=l-1;
    while(start<end)
    {
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        end--;
        start++;
    }
}
int main()
{

    char s[100];
    printf("enter a string:");
    fgets(s,100,stdin);
    int l=strlen(s);
    reverse_string(s,l);
    printf("Reversed string:%s",s);
    return 0;
}
