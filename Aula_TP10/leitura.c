/**
 * @file leitura.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo de leitura de ficheiro de texto
 * @version 0.1
 * @date 2025-11-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>



int main() {

  char linha[100]; /* Buffer para armazenar uma linha do ficheiro */

  /* Passo 1: criar ponteiro para a estrutura de controlo do ficheiro */


  /* Passo 2: abrir o ficheiro para leitura */

  
  while (fgets(linha, sizeof(linha), fp) != NULL) {
    printf("%s", linha);
  }

  /* Passo 3: fechar o ficheiro */
  fclose(fp); 

  return 0; 
}