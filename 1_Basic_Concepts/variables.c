#include <stdio.h>
#include <stdlib.h>

// VARIÁVEIS E CONSTANTES

// Definição de constante no preprocessador
#define PI_2 3.141

int main() {
  // Uso da vírgula para declarar mais de uma várável
  int a, b, c, d;
  // ponto para números fracionados
  float salario = 2007.89;
  // aspas simples para atribuir um caractere 
  char letra = 'Z';
  a = 10;
  b = 20;
  c = 30;
  d = a + b + c;

  // CONTANTES --> 2 FORMAS 
  const double PI_1 = 3.14; // outra forma antes do main()

  printf("%d \n", d);
  printf("%f \n", salario);
  printf("%c \n", letra);
  printf("%f \n", PI_1);
  printf("%f \n", PI_2);
  return 0;
} 