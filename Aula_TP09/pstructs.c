/**
 * @file pstructs.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo do uso de ponteiros para struct
 * @version 0.1
 * @date 2025-11-06
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{

  struct estudante
  {
    char nome[30];
    int idade;
    double media;
  };

  struct estudante estudante2;

  strcpy(estudante2.nome, "Maria Antónia");
  estudante2.idade = 21;
  estudante2.media = 14.5;

  struct estudante *pst; /* criação do ponteiro pst */

  pst = &estudante2; /* pst fica a apontar para estudante2 */

  /* impressão dos conteúdos de estudante2 usando o ponteiro pst */
  printf("Estudante %s tem %d anos e tem uma média de %.1f.\n", (*pst).nome,
         (*pst).idade, (*pst).media);

  return 0;
}