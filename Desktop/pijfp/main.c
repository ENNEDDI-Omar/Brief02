#include <stdio.h>

int main() {
   

char T[6] = {'w','z','a','r','d','x'}; 
char tmp;



for ( int i = 0 ; i < 6 ; i++){
   for (int j = i + 1 ; j < 6 ; j++){
      if (T[i]>T[j]){
         tmp = T[i];
         T[i] = T[j];
         T[j] = tmp;
      }
      
   }
}

for (int i = 0; i < 6 ; i++)
{
   printf("%c ",T[i]);
}




  

  

   
   return 0;
}

