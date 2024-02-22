#include <stdio.h>
void ZeroAndOne(int arr1[], int n)
{
    int ctr = 0;
    for (int i = 0; i < n; i++) {
        if (arr1[i] == 0)
            ctr++;
    }
    for (int i = 0; i < ctr; i++)
        arr1[i] = 0;
    for (int i = ctr; i < n; i++)
        arr1[i] = 1;
}
void printSegre(int arr1[], int n)
{
    printf("The array after segregation is: ");
    for (int i = 0; i < n; i++)
        printf("%d  ", arr1[i]);
}

int main()
{
    int arr1[] = { 1, 0, 1, 0, 0, 1, 0, 1, 1 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
	int i;
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
	{
		printf("%d  ", arr1[i]);
	}
	printf("\n");
    ZeroAndOne(arr1, n);
    printSegre(arr1, n);

    return 0;
}
