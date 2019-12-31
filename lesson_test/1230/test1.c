#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int str[10];
    int i;

    for ( i = 0; i < 10; i++)
    {
        str[9 - i] = arr[i];
    }

    for ( i = 0; i < 10; i++)
    {
        arr[i] = str[i];
    }

    for ( i = 0; i < 10; i++)
    {
       printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    system("pause");
    return 0;
    
}