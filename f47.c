/*Q6.  Write a user define function to find the highest frequency character in a string.
Test Data:
Welcome to graphic era
Expected Output: Highest frequency character appears in a string is e.*/

#include<stdio.h>
#include<string.h>
char highfreq(char[]);
int main()
{
	char a[100],p;
	printf("\t ********INPUT******** \n");
    printf("\n");
    printf("\t ENTER THE STRING: \n");
    fgets(a,100,stdin);
    p=highfreq(a);
	printf("\t ********OUTPUT******** \n");
    printf("\n");
    printf("\t HIGHEST FREQUENCY CHARACTER APPEARS IN THE STRING IS: %c \n",p);
	return 0;
}
char highfreq(char x[])
{
	char z1,z2;
          int l,y1=0,y2=0,i,j;
          l = strlen(x);
          l=l-1;
          for(i=0;i<l;i++)
          {
           	z2=x[i];
            	for( j=0;j<l;j++)
            	{
                		if(x[i]==x[j])
                		{
                    		y2++;
                		}
            	}
               	 if(y2>y1)
                	{
                       	 y1=y2;
                        	 z1=z2;
                	}
                    y2=0;
        }
        return z1;
}



