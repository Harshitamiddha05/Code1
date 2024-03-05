/*write a c program to input a string and count how many words in the string are of size n*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100], word[50];
int n, i, l, j, l1, c = 0;
printf("Enter a string: ");
fgets(s, 100, stdin);
printf("Enter the word length: ");
scanf("%d", &n);
l = strlen(s);
s[l - 1] = '\0';
i = 0;
j = 0;
while (s[i] != '\0')
{
while (s[i] != ' ' && s[i] != '\0')
{
word[j] = s[i];
j++;
i++;
}
word[j] = '\0';
l1 = strlen(word);
if (l1 == n)
{
c++;
}
j = 0;
if (s[i] != '\0')
i++;
}
printf("%d words are present in the string of size %d.\n", c, n);
return 0;
}
