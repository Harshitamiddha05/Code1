#include <string.h>
#include <stdio.h>
int main()
{
char str[100], str1[100], concatstr[300];
int i, j, l, l1;
printf("Input a string: ");
fgets(str, 100, stdin);
printf("Input the second string: ");
fgets(str1, 100, stdin);
l = strlen(str);
if (str[l - 1] == '\n')
str[l - 1] = '\0';
l1 = strlen(str1);
if (str1[l1 - 1] == '\n')
str1[l1 - 1] = '\0';
for (i = 0; str[i] != '\0'; i++)
concatstr[i] = str[i];
for (j = 0; str1[j] != '\0'; j++)
concatstr[i + j] = str1[j];
concatstr[i + j] = '\0';
printf("String 1: %s\n", str);
printf("String 2: %s\n", str1);
printf("Concatenated string: %s\n", concatstr);
return 0;
}
