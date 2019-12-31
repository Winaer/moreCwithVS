#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_66()
{
    int num;
    int x;
    int y;
    int guess;

    num = rand()%99+10;
    x = num /10;
    y = num%10;

    printf("x+y =%d,x*y = %d\n", x+y, x*y);
    while (1)
    {
        
        printf("please input you guess:\n");
        scanf("%d", guess);

        if (guess > num)
        {
            printf("your guess is high:\n");
        }
        else if (guess < num)
        {
            printf("your guess is low:\n");
        }
        else if (guess == num)
        {
            printf("Good, you're right!\n");
            break;
        }
    
    }
}




int main()
{

    system("pause");
    return 0;
}