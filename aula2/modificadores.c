#include <stdio.h>

int main() {
  signed char caracter_com_sinal; // 1 byte -128 a 127 
  unsigned char caracter_sem_sinal; // 1 byte 0 a 255

  signed int inteiro_com_sinal; // 4 byte -2bi a 2bi
  unsigned int inteiro_sem_sinal; // 4 byte 0 a 4bi
  
  short int inteiro_curto; // 2 byte -32mil a 32mil
  unsigned short int inteiro_curto_sem_sinal; // 2 byte 0 a 65mil

  long int inteiro_lomgo; // 8 byte -9hexa a 9hexa
  unsigned long int inteiro_lomgo_sem_sinal; // 8 byte 0 a 18hexa

  long double duplo_longo; // 16 byte -1.2e+4932 a 1.2e+4932
  
  return 0;
}