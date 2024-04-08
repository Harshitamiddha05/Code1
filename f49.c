/*Q4.  Write a program in C to find the max element of each row of a matrix.
Expected Output:
The given array is:
1 2 3
4 5 6
7 8 9
The maximum element of each row of matrix are: 3 6 9 */

#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n,max;
	printf("\t ********INPUT******** \n");
	printf("\n");
      printf("ENTER ROW AND COLUMNS : \n");
	scanf("%d%d",&m,&n);
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
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("THE MAXIMUM ELEMENT OF EACH ROW ARE: \n");
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			max=a[i][j];
		}
		printf("%d ",max);
	}
	return 0;
}









