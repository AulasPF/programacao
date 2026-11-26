#include <stdio.h>

struct Aluno {
    int    numero;
    float  media;
    char   nome[20];
};

int main(void) {
    FILE *fp;
    struct Aluno a = {12345, 14.5, "Ana Silva"};
    struct Aluno b;

    fp = fopen("aluno.bin", "wb");
    if (fp == NULL) return 1;

    fwrite(&a, sizeof(struct Aluno), 1, fp);
    fclose(fp);

    fp = fopen("aluno.bin", "rb");
    if (fp == NULL) return 1;

    fread(&b, sizeof(struct Aluno), 1, fp);
    fclose(fp);

    printf("Numero: %d\n", b.numero);
    printf("Media : %.2f\n", b.media);
    printf("Nome  : %s\n", b.nome);

    return 0;
}
