#include <stdio.h>

int main()
{
    int n, i, a[10];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("The elements in the array are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}