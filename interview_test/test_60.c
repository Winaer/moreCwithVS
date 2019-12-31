#include <stdio.h>
#include <stdlib.h>


void test57()
{
    int odd = 0;
    int even = 0;
    int i;

    for ( i = 1; i <= 100; i++)
    {
        if (i %2 == 0)
        {
           even++;
        }
        else
        {
            odd++;
        }      
    }
    
    printf("the odd sum between 1 and 100 is :%d\n", odd);
    printf("the even sum between 1 and 100 is :%d\n", even);

}

void test59()
{
    int i;

    printf("the figure between 1 and 100 can be div is:\n");

    for ( i = 1; i <= 100; i++)
    {
        if ( (i%3 == 0) && (i%5 != 0) )
        {
            printf("%d\t", i);
        }
        
    }
    
}


void test60()
{
    int n;
    int i;
    int count = 1;

    printf("please input the value n to count n! :\n");
    scanf("%d", n);

    for ( i = 1; i <= n; i++)
    {
        count *= i;
    }

    printf("%d! = %d", count);

}

void test61()
{
    int sum = 0;
    int i;

    for ( i = 1; i <= 50; i++)
    {
        if (i%7 == 0)
        {
            sum += i;
        }      
    }

   printf("the sum of multiple of 7 between 1 and 50 is :%d\n", sum); 
}

void test73()
{
    int wm = 1020;
    int day;

    for ( day = 1; wm > 0; day++)
    {
        wm -= wm/2 +2;
    }
    
    printf("%d day we sell out watermelon\n", day);

}


void test74()
{
    int i;

    printf("test74 figures are:\n");

    for ( i = 1; i < 100; i++)
    {
        if ((i %10 == 6) && (i %3 == 0))
        {
           printf("%d\t",i);
        }
        
    }

}




int main()
{
    system("pause");

    return 0;
}