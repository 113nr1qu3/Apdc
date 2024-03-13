#include <stdio.h>

int main() {
  printf("\x1b[32m-----------------------------------------\n");
  printf("               NOTA LEGAL                \n");
  printf("-----------------------------------------\x1b[0m\n");
  printf("\x1b[36mItem                     Qtd        Valor\n");
  printf("%-15s %11i %12.2f\n" , "Bolo de cenoura" , 1, 10.00);
  printf("%-15s %11i %12.2f\n" , "Coca-cola" , 2, 22.00);
  printf("%-15s %11i %12.2f\n" , "Velas" , 3, 3.50);
  printf("%-15s %11i %12.2f\n" , "Confetes" , 5, 5.00);
  
 // printf("Bolo de cenoura          1        R$10,00\n");
 // printf("Coca-cola                2        R$22,00\n");
 // printf("Velas                    3        R$3,50\n" );
 // printf("Confetes                 5        R$5,00\n" );
  
  printf("\x1b[32m-----------------------------------------\n");
  printf("Total                    11       R$40,50\x1b[0m\n");
  
  return 0;
}