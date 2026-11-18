/**
 * @file escrita.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo de escrita em ficheiro de texto.
 * @version 0.1
 * @date 2025-11-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

  char nome[]="";    /* Escrever aqui o nome */

  /* Passo 1: criar o ponteiro para o descritor do ficheiro */
  
  
  /* Passo 2: abrir o ficheiro chamado id.txt em modo de escrita. */


  fprintf(fp,"%s\n", nome); 

  /* Passo 3: fechar o ficheiro */
  fclose (fp); 

  return 0;
}