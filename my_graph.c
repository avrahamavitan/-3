#include <stdio.h>
#include "my_mat.h"

int main(){
char ch;
int arr[10][10];
scanf("%c ",&ch);
while(ch!='D'){
if(ch=='A'){fanc1(arr);}
if(ch=='B'){fanc2(arr);}
if(ch=='C'){fanc3(arr);}
scanf("%c ",&ch);
}
   return 0; 
}