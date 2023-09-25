// principal.c
#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    FILE *file;
    int numVertices;

    // Abre o arquivo de entrada
    file = fopen("vertices.txt", "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o número de vértices
    fscanf(file, "%d", &numVertices);

    // Aloca espaço para armazenar os vértices
    Ponto *vertices = (Ponto *)malloc(numVertices * sizeof(Ponto));

    if (vertices == NULL)
    {
        printf("Erro de alocação de memória.\n");
        fclose(file);
        return 1;
    }

    // Lê as coordenadas dos vértices
    for (int i = 0; i < numVertices; i++)
    {
        fscanf(file, "%lf %lf", &vertices[i].x, &vertices[i].y);
    }

    // Fecha o arquivo
    fclose(file);

    // Calcula a área do polígono
    double area = calcularAreaPoligono(vertices, numVertices);

    // Exibe a área
    printf("A área do polígono é %.2lf\n", area);

    // Libera a memória alocada
    free(vertices);

    return 0;
}
