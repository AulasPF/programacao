/**
 * @file livrofunc_v.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo de funções que trabalham com structs: 
 *        passagem do argumento por valor
 * @version 0.1
 * @date 2025-11-06
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <stdio.h>

struct livro {
  char titulo[70];  
  char autor[50];
  float preco;
};

/**
 * @brief Apresentação informação sobre um livro
 * 
 * @param l   Livro a apresentar
 */
void imprimeInfoLivro(struct livro l);

int main() {

  struct livro livro1 = {"Os Lusíadas", "Luís Vaz de Camões", 17.0};
  struct livro livro2 = {"Memorial do Convento", "José Saramago", 14.5};

  imprimeInfoLivro(livro1);
  imprimeInfoLivro(livro2);

  return 0;
}

void imprimeInfoLivro(struct livro l) {
  printf("--------------------------------------\n");
  printf("Título: %s\n", l.titulo);
  printf("Autor: %s\n", l.autor);
  printf("Preço: %.2f\n", l.preco);
  printf("--------------------------------------\n\n");
}
