#include <stdio.h>
#include <stdlib.h>

void test27()
{
    int num[20];
    int i;
    int max;
    int min;

    printf("please input these 20 figures :\n");

    for(i = 0; i < 20; i++)  
    {
        scanf("%d",&num[i]);
    }

    max = num[0];
    min = num[0];

    for ( i = 0; i < 20; i++)
    {
        max = max > num[i] ? max : num[i];
        min = min < num[i] ? min : num[i];
    }
    
    printf("the bigest in the array is %d\n,the least in the array is %d\n", max, min);


}

void test28()
{
    int num[15];
    int i;
    int max;
    int maxi;

    printf("please inout these 15 figures:\n");

    for(i = 0; i < 15; i++)
    {
        printf("please input the %dth figure :\n",i+1);
        scanf("%d",&num[i]);
    }
    
    max = num[0];
    maxi = 0;

    for(i = 0; i < 15; i++)
    {
        if (max <= num[i])
        {
            max = num[i];
            maxi = i;
        }
    }

    num[maxi] = num[0];
    num[0] = max;

    printf("the bigest figure in the array is :%d\n", max);
    
    for(i = 0; i < 15; i++)
    {
        if (max <= num[i])
        {
            printf("now the array is :%d \n", num[i]);
        }
    }

}


void test29()
{
    int a[10];
    int b[5];
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("please input the %dth figure :\n",i+1);
        scanf("%d",&a[i]);
        if (i %2 == 0)
        {
            b[i/2] = a[i];
        }
    }
    for(i = 0; i < 10; i++)
    {
    printf("the array a[%d] is %d \n",  i+1, a[i]);
        if (i %2 == 0)
        {
        printf("the array b[%d] is %d \n",  i/2+1,b[i/2]);
        }
    
    } 

}


int main ()
{
    test27();
    test28();
    test29();

    system("pause");
    return 0;
}