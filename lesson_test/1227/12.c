#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
void test1()
{
    char x;
    int lenth;
    int i;
    int j;


    printf("please input the word with upcase :\n");
    scanf("%c", &x);

    lenth = x - 65;

    for ( i = 0; i <= lenth+1; i++)
    {
        for ( j = 0; j < lenth - i ; j++)
        {
            printf(" ");
        }
        for ( j = 0; j < i; j++)
        {
            printf("%c", 65+j);
        }
        for ( j = i-2; j>=0; j--)
        {
            printf("%c", 65+j);
        }
        
        printf("\n");       
    }
     printf("\n");

}


void test2()
{

    char str[500];
    int more = 0;
    int space = 0;
    int other = 0;
    int i;
    int judge = 0;


    printf("please input the string:\n");
   do 
   {
        gets(str);

        for ( i = 0; '\0' != str[i]; i++)
        {

            if (str[i] != '#')
            {
                if (str[i] == 32)
                {
                    space++;
                }
                else
                {
                    other++;
                }               
            }
            else
            {
                judge = 1;
                break;
            }       
        }
        more++;

        if (judge == 1)
        {
            break;
        }
        
   }while( 35 != getchar());
//此处存疑
   if (more > 1)
   {
       other++;
   }
   
    printf("there are %d space and %d changeline and %d other.\n", space, more-1, other);

}

void test3()
{
    float f;
    float c;

    printf("please input the 'f :\n");
    fflush(stdin);
    scanf("%f", &f);


    c = (5 * (f - 32)) / 9;
    printf("the 'c is %5.2f\n", c);

}


void test4()
{
    int num;
    int ten[5] = {0 , 0, 0, 0, 0};
    char sixteen[20] = { ' ','0', 'x'};
    char change;
    int left = 0;
    int i;
    int j;
    int divnum;


    printf("please input the figures less than 999,999 to change:\n");
    fflush(stdin);
    scanf("%d", &num);

    if (num < 0)
    {
        num = abs(num);
        left = 1;
    }

    for ( i = 5; i > 0; i--)
    {
        divnum = 1;
        for ( j = 1; j < i; j++)
        {
            divnum *= 16;
        }

        ten[5 -i] =  num / divnum;  
        num = num % divnum;      
    }
    
    for ( i = 0; i < 5; i++)
    {


        if ( (ten[i] >= 0) && (ten[i] <= 9))
        {
            sixteen[i+3] = ten[i]+48;
        }
        else if (ten[i] > 9)
        {
            sixteen[i+3] = ten[i] + 55;
        }
          
          
    }
    
    if (left == 1)
    {
        sixteen[0] = '-';
    }

    // printf("%s\n", sixteen);
    for ( i = 0; sixteen[i] != '\0'; i++)
    {
       printf("%c", sixteen[i]);
    }
    printf("\n");
    
    
}

*/


int countice(int num)
{
    if (num > 1)
    {
         
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = num*3 +1;
        }  
        printf("%d--", num);
        countice(num);

    }
    return num;
}

void test5()
{
    int num;

    printf("please input the  ice figure:\n");

    scanf("%d", &num);
    countice(num);

}

int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    test5();

    // system("pause");
    return 0;
}