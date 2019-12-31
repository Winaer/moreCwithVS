#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1()
{
    int a[10] = {10,2,45,23,666,65,1222,453,8,7};
    int i;
    int j;

    for (i = 10; i > 0; i--)
    {
       for ( j = 0; j < i; j++)
       {
           if (a[j] < a[j+1])
           {
               a[j] = a[j]^a[j+1];
               a[j+1] = a[j]^a[j+1];
               a[j] = a[j]^a[j+1];
           }
           
       }
       
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("a[%d]= %d\n", i, a[i]);
    }
    


}


void test2()
{
    char str[80];
    int i;
    int j;
    int k;

    printf("please input the string:\n");
    scanf("%s", str);

    for ( i = 0; i < strlen(str); i++)
    {
        for ( j = i+1; j <= strlen(str); )
        {
            if (str[i] != str[j])
            {
                
                j++;
            }
            else
            {
                for ( k = j+1; k <= strlen(str); k++)
                {
                   str[k-1] = str[k];
                  
                }
            }         
        }
        
    }

    printf("%s\n", str);



}


void test3()
{
    int i;
    int figure;
    int guess;

    figure = rand()%100+1;

    for ( i = 0; i < 5; i++)
    {
        
        printf("please input the num you guess:\n");
        scanf("%d", &guess);

        if (guess < figure)
        {
            printf("it's lower!\n");
        }
        else if (guess > figure)
        {
           printf("it's high!\n");
        }
        else if (guess = figure)
        {
            printf("Wondderful,you are right!\n");
            break;
        }

        if (i == 4)
        {
           printf("sorry,you get no chance!\n");
        }
        
        
    }
    

}


void test4()
{
    int str[4][4] = { {0, 1, 1, 1}, { 0, 0, 1, 0}, { 0, 0, 0, 1}, { 1, 1, 1, 0} };
    int judge = 0;
    int killer;
    int i;
    int j;


    printf("a said that he isn't the killer\n");
    printf("b said that c is the killer\n");
    printf("c said that d is the killer\n");
    printf("d said that c is the bull shit\n");




    for ( i = 0; i < 4; i++)
    {
        switch (i)
        {

        case 1:
            printf("if b is lier\n");
            break;
        case 2:
            printf("if c is lier\n");
            break;
        case 3:
            printf("if d is lier\n");
            break;
    
    default:
        printf("if a is lier\n");
        break;
        }


        for ( j = 0; j < 4; j++)
        {
            if (str[i][j] == 0)
            {
                str[i][j] = 1;
            }
            else
            {
                str[i][j] = 0;
            }
            
            
        }


        for ( j = 0; j < 4; j++)
        {
            if ( (str[0][j] == str[1][j] ) && ( str[1][j]== str[2][j] ) && ( str[2][j]== str[3][j] )  )
            {
                judge = 1;
                break;
            }
               

           
        }

        for ( j = 0; j < 4; j++)
        {
            if (str[i][j] == 0)
            {
                str[i][j] = 1;
            }
            else
            {
                str[i][j] = 0;
            }         
        }

        if (judge == 1)
        {
            killer = i;
            break;
        }
        printf("no, that's not right!\n");             
    }
    
    switch (killer)
    {

    case 1:
        printf("the killer is b\n");
        break;
    case 2:
        printf("the killer is c\n");
        break;
    case 3:
        printf("the killer is d\n");
        break;
    
    default:
        printf("the killer is a\n");
        break;
    }





}


void test5()
{
    int arr[10];
    int max;
    int max_i = 0;
    int min;
    int min_i = 0;
    int value;
    int i;


    for ( i = 0; i < 10; i++)
    {
        printf("please input the value you want to find the max and min, now it's %dth num\n", i+1);
        scanf("%d", &arr[i]);

    }

    max = arr[0];
    min = arr[0];
    
    for ( i = 0; i <10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_i = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            min_i = i;
        }
        
    }

    value = max+min;

    printf("the max is %d, and it's in %dth!\n", max, max_i+1);
    printf("the max is %d, and it's in %dth!\n", min, min_i+1);
    printf("the value of max + min is :%d\n", value);
    
}


void test6()
{
    char str[100];
    int count;
    int i;
    int j;

    printf("please input your string:\n");
    fflush(stdin);
    gets(str);

    for ( i = 0; i < strlen(str); i++)
    {
        count = 1;
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
            
        }
        printf("you input %c for %d times!\n", str[i], count);
    }
    


}


void test7()
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
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();



    system("pause");
    return 0;
}