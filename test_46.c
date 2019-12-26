#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void test46()
{
    char str[80];
    int i;

    fflush(stdin);
    gets(str);

    for ( i = 0; str[i] !='!'; i++)
    {
       if (((str[i] >='A') && str[i] <= 'Y')||((str[i] >='a')&&(str[i] <='y')))
       {
           str[i]++;
       }
       else if ((str[i] == 'Z')||(str[i] == 'z'))
       {
          str[i] -= 25;
       }     
    }  
}

void test47()
{
    int cock;
    int hen;
    int chicken;
    int sum = 100;
    int money = 100;
    int n = 0;


    for ( cock = 0; cock< 15; cock++)
    {
        for (hen = 0 ; cock*5+ hen *3 <=100; hen++)
        {
            for (chicken  = 0; chicken/3 + cock*5+ hen *3 <=100; chicken+3)
            {
                if (chicken + hen+cock == 100 )
                {
                    n++;
                }
                
            }
            
        }
        
    }
    
    printf("there is %d ways to buy chick", n);

}

void printmatrix(int *p,int line,int row)
{
    int i;
    int j;

    for ( i = 0; i < line; i++)
    {
        for ( j = 0; i < row; i++,p++)
        {
           printf("%d\t", *p);
        }
        printf("\n");
    }
    printf("\n");
}

void test49()
{
    int matrix1[3][4];
    int matrix2[3][4];
    int matrix3[3][4];
    int i;
    int j;

    printf("please input a 3*4 matrix:\n");
    scanf("%d",matrix1);

    printf("please input the other 3*4 matrix:\n");
    scanf("%d",matrix2);

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <4; i++)
        {
            matrix3[i][j] = matrix1[i][j]+matrix2[i][j];
        }      
    }
    
    printmatrix(matrix1,3,4);
    printmatrix(matrix2,3,4);
    printmatrix(matrix3,3,4);

}

void test50()
{
    int matrix[4][3];
    int transposematrix[3][4];

    int i;
    int j;

    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; i < 3; i++)
       {
           transposematrix[j][i] = matrix[i][j];
       }      
    }
    printf("the matrix is :\n");
    printmatrix(matrix,4,3);

    printf("the transposematrix is :\n");
    printmatrix(transposematrix,3,4);

}


void test51()
{
    char str[80];
    int i;

    printf("please input the string:\n");
    gets(str);

    for ( i = 0; i < strlen(str); i++)
    {
        if ((str[i]>='A')&&(str[i]<='Z'))
        {
            str[i] += 32;
        }
        else if ((str[i]>='a')&&(str[i]<='z'))
        {
            str[i] -= 32;
        }
              
    }
    puts(str);
}

void test53()
{
    int a;
    float x;
    float y;

    printf("please input the value 'a'\n");
    scanf("%d", &a);

    printf("please input the value 'x'\n");
    scanf("%f", &x);

    if ((a ==x) || ( -a == x))
    {
       y = 0;
    }
    else if ((-a < x) && (x < a))
    {
        y = sqrt(a*a -x*x);
    }
    else if ((-a > x) || (a < x))
    {
        y = x;
    }
    
    printf("x=%5.2f,y=%5.2f", x, y);
}

void test55()
{
    int a;
    int b;
    int h;

    printf("please input the interger a and b:\n");
    scanf("%d %d", &a, &b);

    if (100 < a*a+b*b )
    {
        h = (a*a +b*b)/100;
        printf("the vaule of a*a+b*b >100,so (a*a+b*b)/100=%d \n", h);
    }
    else
    {
        h = a+b;
        printf("the vaule of a*a+b*b <=100,so a+b=%d \n", h);
    }
    
}

void test56()
{
    int x;

    printf("please input the figures to judge if it's above 5 and 7:\n");
    scanf("%d", &x);

    if ((x%5 ==0) && (x%7 == 0))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    

}

int main()
{
    test46();
    test47();
    test49();
    test50();
    test51();
    test53();
    test55();
    test56();

    system("pause");
    return 0;
}