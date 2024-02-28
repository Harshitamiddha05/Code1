/* write a c program to insert elements in 2d array and sort this 2d array in ascending order by passing array as an argument in function*/
#include <stdio.h>
void sort(int arr[3][3])
{
int temp;
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
for (int k = 0; k < 3; k++)
{
for (int l = 0; l < 3; l++)
{
if (arr[i][j] < arr[k][l])
{
temp = arr[i][j];
arr[i][j] = arr[k][l];
arr[k][l] = temp;
}
}
}
}
}
}

void print(int arr[3][3])
{
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", arr[i][j]);
}
printf("\n");
}
}

int main()
{
int arr[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
printf("Original Array:\n");
print(arr);
sort(arr);
printf("\nSorted Array:\n");
print(arr);
return 0;
}
