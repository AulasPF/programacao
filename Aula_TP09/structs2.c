/**
 * @file structs2.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo de cópia de uma struct
 * @version 0.1
 * @date 2025-11-06
 * 
 * @copyright Copyright (c) 2025
 * 
 * Ao contrário dos arrays e das strings, que normalmente são manipulados 
 * através de ponteiros, quando fazemos uma atribuição (=) entre duas 
 * structs, os valores de todos os campos são copiados. 
 * Ou seja, numa expressão do tipo
 *   structA = structB; 
 * a struct da esquerda fica com uma cópia completa da struct da direita.
 */

#include <stdio.h>
#include <string.h>

int main() {

  struct estudante {
    char nome[30];
    int idade;
    double nota;
  };

  struct estudante estudante2;

  strcpy(estudante2.nome, "Maria Antónia");
  estudante2.idade = 21;
  estudante2.nota = 14.5;

  struct estudante estudante3;

  estudante3 = estudante2;  /* Os dados de estudante2 são copiados para estudante3 */

  printf("Estudante %s tem %d anos e teve uma nota de %.1f.\n", estudante3.nome,
         estudante3.idade, estudante3.nota);
}