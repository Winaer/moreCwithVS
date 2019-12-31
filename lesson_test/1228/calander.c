#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// struct year
// {
//     char id;
//     int prime;
//     int start_week;
//     char year_week[8][9]; 
//     int m[12]; 
//     char m_e[13][10];

// };





// void test6()
// {
//     int year;
//     int month;
//     int day_count = 0;//用于计算这天是第多少天的中间变量
//     char year_week[8][9] = { "Sun", "Mon", "Tus", "Wen", "Thu", "Fri", "Sat"};
//     int m[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// //   int month[12] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
//    
//     char week_space[80] = {"    "};//用于在日期的空格地区输出空格符号
//     int day_chose[12][2];//每个月第一天对应的星期几,每个月最后一天对应
//     int day_month_chose[12] = {0};//每个月第一天在这年中是第多少天
//     int line[1000];//用于显示的总表
//     int week[100][7];//用于显示每一个周
//     int i;
//     int j;
//     int k;

//     printf("please input the year that you want to learn:\n");
//     scanf("%d", &year);

// /**********************************************
//  * 判断是否闰年以及二月的天数
//  * 
//  * *****************************************/



//     if ( ( (year%4 ==0 ) && (year%100 != 0) ) || (year %400 == 0))
//     {  
//         m[1] = 29;  
//     }

//     // int day_year[day_count];

//     // for ( i = 0; i < 12; i++)
//     // {
//     //     k = 0;
//     //     for ( j = 1; j <= m[i]; j++)
//     //     {
//     //         day_year[k] = j;
//     //         k++;
//     //     }
        
//     // }


// /********************************************************************************
//  * 把这一年对应的日期进行排序  ，每个月的日期前面的空格以及该月的所有日期全部写入数组
//  * 空格写0
//  * 
//  * **********************************************************************/

// //先计算出每个月开头是这一年的第多少天，以及应该对应星期几
//     for ( i = 0; i < 12; i++)
//     {
//        for ( j = i; j >=1; j--)
//        {
//             day_month_chose[j] = m[j]+day_month_chose[j-1];
//        }

//         day_chose[i][0] =  ((year - 1)+((year - 1)/ 4) +((year - 1) /400) -( (year -1)/100 ) + 1+day_month_chose[i])  % 7;
//         day_chose[i][1] =  ((year - 1)+((year - 1)/ 4) +((year - 1) /400) -( (year -1)/100 ) + 1+day_month_chose[i+1])  % 7;

//     }

//     for ( i = 0; i < 12; i++)
//     {
//         for ( j = day_count , k =0; j < day_chose[i][0] + m[i+1]+day_chose[i][1]; j++, k++)
//         {
//             if (k < day_chose[i][0])               //每个月开头的空格
//             {       
//                 line[j] = 0;
//             }
//             else if (  (k >= day_chose[i][0]) && (k < day_chose[i][0] + m[i+1]))
//             {
//                 line[j] = k - day_chose[i][0] +1;   //当月的日期
//             }
//             line[j] = 0;                //每个月末尾的空格                      
//         }

//         day_count += day_chose[i][0]+m[i+1]+day_chose[i][1];
        
//     }

//     for ( i = 0; i < 7; i++)
//     {
//         printf("%d\t", day_chose[i][0]);
//         printf("%d\t", day_chose[i][0]);
//     }
    

//     // for ( i = 0; i < 500; i++)
//     // {
//     //    printf("%d\t", line[i]);
//     // }
    
    
    











// /************************************************************************************
//  * 
//  * 显示  把已排序完成的日期  循环写进一个 长度为 7 的数组，每次写完后循环，外层套上月份循环
//  * 
//  * 
//  * ******************************************************************************/
//     // for ( i = 0; 500 > i*7; i+=7)          
//     // {
//     //    for (j = 0; j < 7; j++)
//     //    {
//     //        week[i][j] = line[7*i + j];
//     //    }
       
//     // }


//     //    printf("%s", m_e[0]);
//     //    printf("%s", year_week[0]);
//     //    for ( k = 0; k < 500; k++)
//     //    {
//     //        for ( i = 0; i < 7; i++)
//     //        {
//     //           if (week[k][i] == 0)
//     //           {
//     //             printf(" \t");
//     //             continue;
//     //           }
//     //           printf("%d", week[k][i]);
              
//     //        }
//     //        printf("\n");
           
//     //    }

// }.



void test()
{
    int year;
    int m[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char year_week[7][9] = { "Sun", "Mon", "Tus", "Wen", "Thu", "Fri", "Sat"};
    char m_e[13][10] = {"Jua","Fbe", "Mar", "Apr", "May", "Jun", "jul", "Aug", "Dec", "Spt","Otc", "Nov", "Dec"};
    int day_chose = 0;
    int space[12];
    int i;
    int j;
    int k;


    printf("please input the year that you want to learn:\n");
    scanf("%d", &year);

   


    
    if ( ( (year%4 ==0 ) && (year%100 != 0) ) || (year %400 == 0))
    {  
        m[1] = 29;  
    }

    for ( i = 0; i < 12; i++)
    {
        day_chose += m[i];
        space[i] = ((year - 1)+((year - 1)/ 4) +((year - 1) /400) -( (year -1)/100 ) + 1+day_chose)  % 7;
    }
    

    for ( i = 0; i < 12; i++)
    {
        printf(" %dyaer         %s\n", year, m_e[i]);
        for ( j = 0; j < 7; j++)
        {
           printf("%s\t", year_week[j]);
        }
        printf("\n");

        for ( j = 0; j < m[i+1]+space[i]; j++)
        {
            if (j < space[i])
            {
                printf("   \t");

            }else
            {
                printf(" %d \t", j-space[i]);
            }
            if ( (j+1) %7 == 0)
            {
                printf("\n");
            }          
        }
        printf("\n");
    }
    



}




int main()
{
    test();
    // test6();
    system("pause");






    return 0;
}