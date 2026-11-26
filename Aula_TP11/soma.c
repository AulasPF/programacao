/**
 * @file soma.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Demonstração do uso de programas que recebem args pela linha de
 * comando. Soma dois valores e imprime o resultado.
 * @version 0.1
 * @date 2025-11-17
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 3) {
    printf("Usage: %s num1 num2\n", argv[0]);
    return 1;
  }

  double sum, val1, val2;
  
  /* Inserir aqui código para guardar em val1 e val2 os valores passados
     como primeiro e segundo argumento */

  sum = val1 + val2;

  printf("%g\n", sum);
  return 0;
}