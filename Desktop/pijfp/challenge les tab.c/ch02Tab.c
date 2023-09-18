#include<stdio.h>
int main(){

int i, nbr, tab[10], mini, maxi;

for (int i = 0; i <10; i++)
{
    printf("\nentrez les nombres%d:", i+1);
    scanf("%d",&tab[i] );

}
   mini = tab[0];
for (int i = 0; i < 10; i++)
{
    if (mini > tab[i])
    {
        mini = tab[i];
    }
    
}
  printf("\nle nombre minimum est : %d", mini);
   
   maxi = tab[0];

   for (int i = 0; i < 10; i++)
   {
    if (maxi < tab[i])
    {
        maxi = tab[i];
    }
      
   }
   printf("\nle nombre maximum est : %d", maxi);
   
   for (int i = 0; i < 10; i++)
   {
    printf("\nles elements sont:%d", tab[i] );

   }
   
   

    return 0;
}