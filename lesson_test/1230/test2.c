#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
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

    printf("%s", str);
    

    system("pause");
    return 0;
}