/*write a c program to input an array and reverse the array elements from particular index to the last using dynamic memory allocation*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,index;
printf("\t\t*****INPUT*****\n");
printf("Enter the value of n ");
scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
scanf("%d",&p[i]);
    }
printf("Enter the index to reverse the array ");
scanf("%d",&index);
int j;
for(i=index,j=n-1;i<j,j>=i;i++,j--){
int temp=p[i];
p[i]=p[j];
p[j]=temp;
}
printf("\t\t*****OUTPUT*****\n");
printf("Reversed array\n");
    for (i = 0; i< n; i++) {
printf("%d ", p[i]);
    }
printf("\n");
    return 0;
}
