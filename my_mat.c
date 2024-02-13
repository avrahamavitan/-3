#include <stdio.h>
#include <stdbool.h>
#include "my_mat.h"
#define w (20)
#define size (5)

void algoritem(int arr[10][10]){//אלגוריתם שמחשב את הדרך הקצרה בגרף 
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if (arr[i][j]==0){arr[i][j]=9999999;}
            else{arr[i][j]=arr[i][j];}
        }
    }
    for(int k=0;k<10;k++){
        for (int i=0;i<10;i++){
             for(int j=0;j<10;j++){
                if(i==j){arr[i][j]=9999999;}
                 else{
                if(arr[i][k]!=9999999&&arr[k][j]!=9999999){
                     if (arr[i][k]+arr[k][j]<arr[i][j]){
                    arr[i][j]=arr[i][k]+arr[k][j];
                    }
                }
                
                }
             }
        
        }
    }
}


void fanc1(int arr[10][10]){//for 'A'
    for(int i=0;i<10;i++){
        for (int j=0;j<10;j++)
         {
        scanf(" %d",&arr[i][j]);
         }
    }
}
void fanc2(int arr[10][10]){//for 'B'
algoritem(arr);
int i;
int j;
scanf(" %d",&i);
scanf(" %d",&j);
int x=arr[i][j];
if(x!=9999999){printf("True\n");}
else printf("False\n");
 
}

void fanc3(int arr[10][10]){//for 'C'
algoritem(arr);
int i;
int j;
scanf(" %d",&i);
scanf(" %d",&j);
int x=arr[i][j];

if(x!=9999999){printf("%d\n", x);}
else printf("%d\n", -1);
}




int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int weights[], int values[], int selected_bool[])
{
    int i, j;
   int K[size+1][w+1];//הכנת המערך של התכנון הדינמי
   for (i = 0;i <= size;i++)
   {
       for (j =0; j <= w;j++)
       {
           if (i==0 || j==0)
               K[i][j] = 0;
           else if (weights[i-1] <= j)
                 K[i][j] = max(values[i-1] + K[i-1][j-weights[i-1]],  K[i-1][j]);
           else
                 K[i][j] = K[i-1][j];
       }
   } 

   
   i=0;
   j=0;
   while(i<size&&j<w){//מציאת האיברים עצמם שלקחנו
        if(K[size-1-i][w-j]<K[size-i][w-j]){
            selected_bool[size-i-1]=1;
             i++;
             j+=weights[size-i];
        }
        else i++;
   }
    return K[size][w];//המיקום האחרון במערך הוא הערך הכי שווה שאפשר לקחת
   }
