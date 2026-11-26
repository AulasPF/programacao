#include <stdio.h>

int main(){
  
  int v[] = {1,2,3,4};
  size_t ret;
  
  FILE *fp = fopen("dados.bin","wb");
  if (fp == NULL){
    printf("Erro a abrir o ficheiro para escrita.\n");
  }

  ret = fwrite(v, 1, sizeof(v), fp);

  if(ret != sizeof(v)){
    fprintf(stderr,"Erro na escrita!\n");
    return 1; 
  }

  fclose(fp); 

  return 0; 
}