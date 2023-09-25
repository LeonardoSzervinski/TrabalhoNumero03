// ponto.h

#ifndef PONTO_H
#define PONTO_H

// Estrutura para representar um ponto
typedef struct
{
    double x;
    double y;
} Ponto;

// Função para criar um ponto
Ponto criarPonto(double x, double y);

// Função para calcular a área do polígono usando a fórmula de Shoelace
double calcularAreaPoligono(Ponto *vertices, int numVertices);

#endif
