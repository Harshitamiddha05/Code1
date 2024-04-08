/*Q1.Write a user define function in C to print all unique elements in an array.
Test Data:
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array:
element –I : 3
element –II : 2
element –III : 2
element –IV : 5
Expected Output:
The unique elements found in the array are: 3 5 */

#include <stdio.h>
void unique(int [],int);
int main()
{
    int a[10],n,i;
    printf("\t ********INPUT******** \n");
    printf("\n");
    printf("ENTER THE ARRAY SIZE: \n");
    scanf("%d",&n);
    printf("ENTER THE ARRAY ELEMENTS: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    unique(a,n);
    return 0;
}
void unique(int a[10],int n)
{
    int i,j;
    printf("\t ********OUTPUT******** \n");
    printf("\n");
    printf("UNIQUE ELEMENTS FOUND IN THE ARRAY ARE: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i]==a[j] && i != j)
            break;
        }
        if(j==n)
        {
            printf("%d  ",a[i]);
        }
    }
}
