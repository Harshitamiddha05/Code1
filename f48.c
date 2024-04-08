/*Q5.  Write a program in C to split string by space into words.
Test Data:
this is a test string
Expected Output: Strings or words after split by space are:
this
is
a
test
string. */

#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,c=0;
	char str[20],word[20];
	printf("\t ********INPUT******** \n");
       printf("\n");
	printf("ENTER A STRING \n");
	fgets(str,20,stdin);
	l=strlen(str);
	printf("\t ********OUTPUT******** \n");
       printf("\n");
	printf("STRINGS OR WORDS AFTER SPLIT BY SPACES ARE:\n");
	for(i=0;i<l;i++)
	{
	 	if(str[i]==' '|| str[i]=='\0')
	         {
	          	printf("\n");
	          }
	          else
	          {
	            	printf("%c",str[i]);
	           }
	 }
	 return 0;
}



