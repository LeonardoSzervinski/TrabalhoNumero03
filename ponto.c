// ponto.c
#include "ponto.h"
#include <math.h>

// Função para criar um ponto
Ponto criarPonto(double x, double y)
{
    Ponto ponto;
    ponto.x = x;
    ponto.y = y;
    return ponto;
}

// Função para calcular a área do polígono usando a fórmula de Shoelace
double calcularAreaPoligono(Ponto *vertices, int numVertices)
{
    double area = 0.0;

    for (int i = 0; i < numVertices - 1; i++)
    {
        area += (vertices[i].x * vertices[i + 1].y) - (vertices[i + 1].x * vertices[i].y);
    }

    // Considerando o último vértice com o primeiro vértice
    area += (vertices[numVertices - 1].x * vertices[0].y) - (vertices[0].x * vertices[numVertices - 1].y);

    // A área pode ser negativa, então pegamos o valor absoluto
    return fabs(area) / 2.0;
}
