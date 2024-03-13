/* 3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  float raio = 5.0f;
  float perimetro = 0.0f;

  const float PI = 3.1416f;
  
  perimetro = 2 * PI * raio;

  printf("O perimetro da pizza é %f\n", perimetro);
  
  return 0;
}