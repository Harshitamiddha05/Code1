/*Q2.  Write a program in C to separate odd and even integers into separate arrays.
Test Data:
Input the number of elements to be stored in the array :5
Input 5 elements in the array:
element - 0: 25
element - 1: 47
element - 2: 42
element - 3: 56
element - 4: 32
Expected Output:
The Even elements are: 42 56 32
The Odd elements are: 25 47 */

#include <stdio.h>
int main()
{
    int a[10],n,i,e[10],o[10],x=0,y=0;
    printf("\t ********INPUT******** \n");
    printf("\n");
    printf("ENTER THE ARRAY SIZE: \n");
    scanf("%d",&n);
    printf("ENTER THE ARRAY ELEMENTS: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[x]=a[i];
            x++;
        }
        else
        {
            o[y]=a[i];
            y++;
        }
    }
    printf("\t ********OUTPUT******** \n");
    printf("\n");
    printf("EVEN ELEMENTS ARE: \n");
    for(i=0;i<x;i++)
    {
        printf("%d  ",e[i]);
    }
    printf("\n");
    printf("ODD ELEMENTS ARE: \n");
    for(i=0;i<y;i++)
    {
        printf("%d  ",o[i]);
    }
    return 0;
}




