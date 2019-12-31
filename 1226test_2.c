#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void test2()
{

    int x;
    char s;

    printf("please input the figures to transform:\n");
    scanf("%d", &x);

    while ((x < 0)||(x > 127))                             //对输入做筛选，符合条件才进行转换
    {
        printf("please input the figures to transform:\n");
        scanf("%d", &x);
    }

    s = x;
    printf("%d transform is :%c\n", x, s);
}


void test4()
{
    float g;
    float heal;
    float num;

    g = 3.0 *(pow(10,-23));
    heal = 450;
    num = heal / g;
    printf("there is about %7.3f water atom in the nonfu spring\n", num);


}

int main()
{

    test2();
    test4();
    
    system("pause");

    return 0;
}