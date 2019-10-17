/* circulo.c: Implementação do TAD Circulo*/

#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

//constante
#define PI 3.14159

typedef struct circulo { 
	Ponto* centro; 
	float raio; 
}Circulo;


// criação do círculo
Circulo* circ_cria (float x, float y, float r){ 
	Circulo* c = (Circulo*) malloc(sizeof(Circulo));
	if (c == NULL) {
		printf("Memória insuficiente!\n");
		exit(1);
	}
	c->centro = pto_cria(x,y);
	c->raio = r;
	return c;
}

// liberarando a memória
void circ_libera (Circulo* c){ 
	pto_libera(c->centro); 
	free(c); 
}







// área do círculo
float circ_area (Circulo* c){ 
	return PI * c->raio * c->raio; 
}





// ponto está dentro do círculo?
int circ_interior (Circulo* c, Ponto* p){ 
	float d = pto_distancia(c->centro,p); 
	return (d<c->raio); 
}

