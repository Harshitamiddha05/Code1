/*Q7.  Write a program to remove characters from a string except alphabets.
Test Data:
graphicera1234@geu.ac.in
Excepted output: graphicerageuacin. */

#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char str[50];
	printf("\t ********INPUT******** \n");
    printf("\n");
	printf("ENTER A STRING \n");
	fgets(str,50,stdin);
	l=strlen(str);
	printf("\t ********OUTPUT******** \n");
	printf("\n");
      for(i=0;i<l;i++)
	{
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}

