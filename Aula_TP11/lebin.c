#include <stdio.h>

#include <stdlib.h>

int main(void)
{
  /* Abre o ficheiro para leitura em modo binário... */
  FILE *fp = fopen("dados.bin", "rb");
  /* ... e testa se houve erro. */
  if (!fp) {
    printf("Erro a abrir o ficheiro %s para leitura", "dados.bin");
    return 1;
  }

  long int x; /* variável para guardar os valores lidos */
  
  while (fread(&x, sizeof x, 1, fp) == 1) {
    printf("%ld\n", x);
  }

  fclose(fp);
  return 0;
}
