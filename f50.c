/*Q3. Write a program in C to find the sum of the lower triangular elements of a matrix.
Expected Output:
The given array is:
1 2 3
4 5 6
7 8 9
The elements being summed of the lower triangular matrix are: 4 7 8
 The Sum of the lower triangular Matrix Elements are: 19 */
#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n,s=0;
	printf("\t ********INPUT******** \n");
        printf("\n");
       printf("ENTER ROW AND COLUMNS : \n");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
	printf("ENTER THE ARRAY ELEMENTS: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d  ",&a[i][j]);
		}
	}
	printf("\t ********OUTPUT******** \n");
       printf("\n");
       printf("ARRAY IS: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("LOWER TRIANGULAR MATRIX IS : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				printf("%d ",a[i][j]);
				s=s+a[i][j];
			}
		}
	}
	printf("\n");
	printf("SUM OF THE LOWER TRIANGULAR MATRIX IS : %d",s);
	}
	else
	{
	printf("INVALID INPUT");
	}
	return 0;
}

