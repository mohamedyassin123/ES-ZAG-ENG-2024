#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int n,i;
    printf("enter the index of the array\n");
    scanf("%i",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for( i=0 ; i<n; i++)
    {
        scanf("%i",&arr[i]);
    }
    printf("the numbers after reverse are : \n");
    for(i=n-1 ; i>=0; i--)
    {
        printf("%i\n",arr[i]);
    }
    return 0;
}
