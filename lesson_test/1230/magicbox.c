#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void box()
{
    int line = 0;
    int row = 0;
    int box_max;
    int i;
    int j;

    printf("please input the max of the box, max must biger than 2:\n");
    scanf("%d", &box_max);

    int box[box_max][box_max];
    for ( i = 0; i < box_max; i++)
    {
        for ( j = 0; j < box_max; j++)
        {
            box[i][j] = 0;
        }
        
    }
    


    

    if (box_max %2 != 0)
    {
        line = box_max/2;
        for ( i = 1; i <= box_max * box_max; i++)
        {
            if (box[row][line] != 0 ) 
            {
                row++;
                box[row][line] = i;
            }
            else
            {
               box[row][line] = i;
            }
            
                       
            if ( (row == 0) && (line == box_max-1))
            {
                row++;

            }
            else if (line == box_max-1)
            {
                line = 0;
                row--;
            }
            else if (row == 0)
            {
                row = box_max-1;
                line++;
                
            }
            else
            {
                row--;
                line++;
            }
            
                  
        }

        for ( i = 0; i < box_max; i++)
        {
           for (j= 0; j < box_max; j++)
           {
               printf("%d\t", box[i][j]);
           }
           printf("\n");
        }
        
    }
    
    






}

int main()
{

    box();
    system("pause");
    return 0;
}