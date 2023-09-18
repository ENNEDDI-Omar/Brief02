#include<stdio.h>
int main()
{

    
    int  i, j, tab[10], mini, maxi, nmbr;

 for (int i = 0; i < 10; i++)
 {
    printf("\nentrez les nombres %d:", i+1);
    scanf("%d", &tab[i]);
 }
 for (int i = 0; i < 10; i++)
 {
    for (int j = i+1; j < 10; j++)
     
    {  
        int op =tab[j];
        if (tab[i] > tab[j]){

 
          tab[j]=tab[i];
          tab[i]=op;

        }
    }
    
 }for (int i = 0; i < 10; i++)
 {
    printf("\nles nombres en ordre croissant:%d", tab[i]);
 }
 
   
 







    return 0;
}