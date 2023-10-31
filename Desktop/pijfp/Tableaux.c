#include <stdio.h>
int main(void)
{

    maxmin();


    return 0;
}

void maxmin(){
    int i, nbr, mini, max, average ;
    int tab[8] = {5, 9, 6, 4, 12, 2, 90, 3};
    float somme=0;
    
    
    max = tab[0];
   

    for (int i = 0; i < 8; i++)
    {
         if (max < tab[i])
        {
            max = tab[i];
        }
    }
    
    printf("le nombre maximum est :%d\n", max);
      
      mini = tab[0];

      for (i=0; i < 8 ; i++)
      {
        if (mini > tab[i])
        {
            mini = tab[i];
        }
        
      }
      printf("le nombre minimum est :%d\n", mini);
      
      for ( i = 0; i < 8; i++)
      {
        somme=somme+tab[i];
      
      }
       float avg = somme/8;
      printf("\nle moyenne de tableau est :%0.2f", avg);
      
}