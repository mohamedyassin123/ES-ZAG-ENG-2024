#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int i,sum=0,n;
    printf("please enter the index\n");
    scanf("%i",&n);
    int arr[n];
    printf("please enter the elements\n");
    for( i=0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i=0 ; i<n; i++)
    {
      sum+= arr[i];
    }
   printf("the sum=%i\n",sum);
    return 0;
}
