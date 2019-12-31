#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void test2()
{

    // double pi = 3.1415926;
    // double m[20];
    int a[5][4];

    int i;
    int j;


    for ( i = 0; i < 5; i++)
    {
       for ( j = 0; j < 4; j++)
       {
          a[i][j] = 5*i + j;
       }
       
    }
    printf("a = %p\n", a);
    printf("a+1 = %p\n", a+1);
    printf("*(a+1)+1 =   %p     &(a[1][1]) = %p\n", *(a+1)+1, &(a[1][1]));
    printf("&a[1]+1 =    %p     &(a[2][0])=  %p\n", &a[1]+1, &(a[2][0]));
    printf("*((a+2)+1) = %p     &(a[3][0]) = %p\n", *((a+2)+1), &(a[3][0]) );


}


int main()
{
    test2();

    system("pause");
    return 0;
} 