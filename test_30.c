#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void test30()
{
    char str1[80];
    char str2[80];
    char str3[160];
    int lenth2;
    int lenth1;
    int i;

    printf("please input your str1:\n");
    fflush(stdin);
    gets(str1);

    printf("please input your str2:\n");
    fflush(stdin);
    gets(str2);

    lenth1 = strlen(str1);
    lenth2 = strlen(str2);
    for ( i = 0; i < lenth1; i++)
    {
        str3[i] = str1[i];
    }
    
    for ( i = lenth1; i < lenth1+lenth2; i++)
    {
       str3[i] = str1[i -lenth1];
    }

    printf("the combine string is :%s\n", str3);
}

void test32()
{
    char longeststr[80];
    char str[3][80];
    int i;


    for(i = 0; i < 3; i++)
    {
        printf("please input the string %d\n", i+1);
        fflush(stdin);
        gets(str[i]);
    }


}


void test33()
{
    int day = -1;
    

    while ((day < 1)||(day > 7))
    {
        printf("please input the day between 1 and 7to be transform:\n");
        scanf("%d",&day);
    }
    switch (day)
    {
    case 1:
        printf("it's Monday\n");
        break;
    case 2:
        printf("it's Tuseday\n");
        break;
    case 3:
        printf("it's Wenday\n");
        break;
    case 4:
        printf("it's Thurday\n");
        break;
    case 5:
        printf("it's Friday\n");
        break;
    case 6:
        printf("it's Saturday\n");
        break;
    case 7:
        printf("it's Sunday\n");
        break;

    default:
        printf("good bye!\n");
        break;
    }
    
}

void test36()
{
    float a;
    float b;
    float c;
    float s;
    float q;

    printf("please input three line to be judge:\n");
    scanf("%f %f %f", &a, &b, &c);

    if ((a+b >c && a-b<c) && (a+c >b && a-c<b)  && (b+c >a && b-c<a)         )
    {
        q = (a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
        s = sqrt(q)/4;
       printf("this is a triage!\n");
       printf("the area of this triangle is :%5.2f\n", s);
    }
}

void test37()
{
    int a;
    int b;
    int c;

    printf("please input three line to be judge:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b >c && a-b<c) && (a+c >b && a-c<b)  && (b+c >a && b-c<a)         )
    {
       
      if ((a==b)||(b==c)||(a==c))
      {
       if((a==b)&&(b==c))
       {
            printf("this is a equilateral triagel!\n");
       }
       else if ((a*a +b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c ==a*a))
       {
            printf("this is an isosceles right triage!\n");
       }else
       {
            printf("this is a isosceles triage!\n");
       }      
      }
      else if((a*a +b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c ==a*a))
      {
          printf("this is a right triage!\n");
      }
      else
      {
        printf("this is a common triangle!\n");
      }     
    }
}

void test41()
{
    int a;
    int b;
    int c;
    double t;
    double root[2];

    printf("please input the three coefficient for ax^2+bx+c:\n");
    scanf("%d %d %d", &a, &b, &c);

    t = b*b -4*a*c ;
    if (t > 0)
    {
        root[0] = (-b +sqrt(t))/2;
        root[1] = (-b-sqrt(t))/2;
        printf("there are two real root for this quadratic,they are:%d %d\n", root[0], root[1]);
    }
    else if (t = 0)
    {
       root[0] = -b/2;
       printf("the only one real root for this quadratic is:%5.2f\n", root[0]);
    }
    else
    {
        printf("there is no real root for this quadratic!\n");
    }   
}


void test43()
{
    int n;
    int N;
    int s = 0;

    for ( n = 0; s < 500; n++)
    {
        if ((s+n <500)&&(s+n+n+1 >500))
        {
            N = n;
            break;
        }
        s +=n;
    }
    printf("the bigest is %d,and the sum is%d:\n", N, s+N);
    
}

void test44()
{
    int t;
    printf("the figures cann't be diff by 3 between 100 and 200 are:\n");
    for(t = 100;t<200;t++ )
    {
       if (t %3 != 0)
       {
          printf("%d\t", t);
       }      
    }
    printf("\n");
}

void test45()
{
    int fibonacci[40] = {1,1};
    int i;

    for ( i = 2; i < 40; i++)
    {
        fibonacci[i] = fibonacci[i-1] +fibonacci[i-2];
    }
    
    for ( i = 0; i < 40; i++)
    {
        printf("%d\t", fibonacci[i]);
        if ((i+1) %5 == 0)
        {
            printf("\n");
        }       
    }
}




int main()
{
    test30();
//    test32();
    test33();
    test36();
    test37();
    test41();
    test43();
    test44();
    test45();

    system("pause");
    return 0;
}