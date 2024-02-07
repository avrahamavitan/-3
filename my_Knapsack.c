#include <stdio.h>
#include "my_mat.h"
#define w (20)
#define size (5)
int main()
{

    char items[size];
    int values[size];
    int weights[size];

    for(int i=0;i<size;i++){
    scanf(" %c", &items[i]);
    scanf("%d", &values[i]);
    scanf("%d", &weights[i]);
    }
  
    int selected_bool[size];
    for (int i = 0; i < size; ++i)
    {
        selected_bool[i] = 0;
    }

    int maxProfit = knapSack(weights, values, selected_bool);

    printf("Maximum profit: %d\n", maxProfit);
 
    printf("Selected items:");

   
    for (int i = 0; i <size; i++)
    {
        if (selected_bool[i] == 1)
        {
            printf(" %c", items[i]);
        }
    }
    printf("\n");
    

    return 0;
}