#include <stdio.h>
#include <string.h>
#define tam 6

typedef struct
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
} Aluno;

int buscaBinariaAlunoRec(Aluno *V, int n, char *nome, int inicio, int fim)
{

    if (inicio > fim)
    {
        return -1;
    }

    int meio = (inicio + fim) / 2;

    if (strcmp(V[meio].nome, nome) == 0)
    {
        return meio;
    }
    else if (strcmp(V[meio].nome, nome) < 0)
    {
        return  buscaBinariaAlunoRec(V, n, nome, meio + 1, fim);
    }
    else
    {
        return buscaBinariaAlunoRec(V, n, nome, inicio, meio - 1);
    }

}

int main(void)
{

    Aluno V[6] = {
        {101, "Ana Silva", 8.5, 7.0, 9.2},
        {102, "Bruno Costa", 6.0, 5.5, 7.0},
        {103, "Carla Souza", 9.0, 8.8, 9.5},
        {104, "Diego Ramos", 4.5, 6.0, 5.0},
        {105, "Fernanda Lima", 7.5, 8.0, 7.8},
        {106, "Gustavo Melo", 5.0, 6.5, 6.8}};

    char nome[30] = "Fernanda Lima";

    printf("posicao: %d", buscaBinariaAlunoRec(V, tam, nome, 0, tam - 1));

    return 0;
}