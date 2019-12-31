#include <stdio.h>
#include <stdlib.h>

void test1()
{
    char upword = 65;
    char lowword = 97;
    int i = 0;

    printf("print the words by do-while:\n");


    do
    {
        printf("%c %c \t", upword, lowword);
        upword++;
        lowword++;
        i++;
    }while(i < 26);
    
}

void test2()
{
    int line;
    int i;
    int j;

    printf("please input the line you want :\n");

    scanf("%d", &line);

    for ( i = 1; i <= line; i++)
    {
        for ( j = 1; j <= i; j++)
        {
           printf("$");
        }
        printf("\n");
    }
    printf("\n");

}

void test3()
{
    int line;
    int i;
    int j;
    int k;

    printf("\n please input the lenth that you want:\n");
    scanf("%d", &line);

    for ( i = 0; i <= line; i++)
    {
       for ( j = 0; j <= line - i; j++)
       {
          printf(" ");
       }
       for ( k = 0; k < 2*i - 1; k++)
       {
           printf("*");
       }
       putchar('\n');
    }
    
}


void test4()
{
    char str[9][10] = {"    *", "   ***", "  *****", " *******", "*********", " *******",  "  *****", "   ***", "    *"};
    int i;

    for ( i = 0; i < 9; i++)
    {
        printf("%s\n", str[i]);
    }
    
    
}

void test5()
{
    int year;
    int month;
    int day_m;
    int day_y;
    int m[12] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}; 
    int i;
    int judge = 0;


    printf("please input year, month and day ,depart them with space:\n");
    scanf("%d %d %d", &year, &month, &day_m);

    if ((month > 12) || (month < 0) || (day_m > 31)  ||(day_m < 0) || (  (month == 2) &&(day_m >= 29) ) || ( ( ( (year%4 !=0 ) || (year %400 != 0)) && (m == 2) &&(day_m > 28) ) ))
    {
        judge = 1;
    }
    

    while( judge == 1 )
    {
        printf("input  error! please input again!\n");
        printf("please input year, month and day ,depart them with space:\n");
        scanf("%d %d %d", &year, &month, &day_m);

    }

    day_y = day_m;
    for ( i = 1; i <= month; i++)
    {
        day_y += m[i];
    }

    if (month > 2)
    {
        if ( ( (year%4 ==0 ) && (year%100 != 0)) || (year %400 == 0) )
        {
            day_y++;     
        }
    }
    
    printf("this day is %dth day in %d yaer\n", day_y, year);

}



void test7()
{
    int x;
    int i;
    int n = 0;

    printf("please input the numb to judge prime :\n");
    scanf("%d", &x);


    for ( i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
           n++;
        }
    }
    if (n <= 2)
    {
       printf("%d is prime number ", x);
    }

}



int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test7();

    system("pause");
    return 0;
}