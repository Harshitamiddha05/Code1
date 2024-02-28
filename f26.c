/*write a c program to insert multiple statements or words in the character array and display the content of the string along the count of number of words present*/
#include <stdio.h>
#include <string.h>
int main()
{
char s[100];
int length = 0, i = 0;
printf("Enter a string: ");
fgets(s, sizeof(s), stdin);
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
{
length++;
}
}
length++;
printf("Number of words present in array is %d\n", length);
printf("Content of the string: %s\n", s);
return 0;
}
