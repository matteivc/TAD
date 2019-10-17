// implementação da interface ponto.h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// interface definida pelo programador
#include "ponto.h"

typedef struct ponto {
	float x;
	float y;
}Ponto;



/* Função para criar um ponto dinamicamente:aloca a estrutura que representa o ponto
   e inicializa os seus campos. Observe o retorno de ponteiro alocado dinamicamente */

Ponto* pto_cria(float x, float y){
	Ponto* p = (Ponto*) malloc(sizeof(Ponto));
	if (p == NULL) {
		printf("Memória insuficiente!\n");
		exit(1);
	}
	p->x = x;
	p->y = y;
	return p;
}


/* Função para liberar um ponto: libera a memória da estrutura criada dinamicamente através da função cria */
void pto_libera (Ponto* p){
	free(p);
}

/*Função para calcular a distância entre dois pontos */
float pto_distancia (Ponto* p1, Ponto* p2){
	float dx = p2->x - p1->x;
	float dy = p2->y - p1->y;
	return sqrt(dx*dx + dy*dy);
}


/* Função para acessar as coordenadas de um ponto: permite que uma função cliente acesse as coordenadas do 
   ponto sem saber os detalhes de como os valores são armazenados. Usa ponteiros para armazenar os valores
   permitir o retorno de dois valores a partir da função */
void pto_acessa (Ponto* p, float* x, float* y){
	*x = p->x;
	*y = p->y;
}

/* Função para alterar as coordenadas de um ponto: permite que uma função cliente altere as coordenadas do 
   ponto sem saber os detalhes de como os valores são armazenados */
void pto_atribui (Ponto* p, float x, float y){
	p->x = x;
	p->y = y;
}


