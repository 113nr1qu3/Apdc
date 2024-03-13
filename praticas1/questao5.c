/* Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>

int main() {
  long int gigabytes = 3;
  long int bytes = 0;

  bytes = gigabytes * 1024 * 1024 * 1024;

  printf("3GB = %ld bytes\n", bytes);
  
  return 0;
}