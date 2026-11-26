/**
 * @file args.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Demonstração do uso de argumentos na linha de comando.
 * @version 0.1
 * @date 2025-11-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(int argc, char *argv[])
{

  printf("argc: %d\n", argc);

  for (int i = 0; i < argc; i++) {
    printf("argv[%d]: %s\n", i, argv[i]);
  }

  return 0;
}