// cliente do TAD circulo

#include <stdio.h>
#include "circulo.h"
#include "ponto.h"

int main (){
	float x, y, raio, area, x1, y1;
	puts("Digite as coordenadas x e y do centro e o raio do circulo: ");
	scanf("%f%f%f", &x, &y, &raio);
	Circulo* circ = circ_cria(x,y,raio);
	
	area = circ_area(circ);
	printf("Área do circulo: %.3f\n", area);
	
	puts("Digite as coordenadas de um ponto: ");
	scanf("%f%f", &x1, &y1);
	Ponto* pto = pto_cria(x1, y1);

	if (circ_interior (circ,  pto))
		puts("Ponto está dentro do círculo!");
	else
		puts("Ponto não está dentro do círculo!");		
	circ_libera(circ);
	pto_libera(pto);
	return 0;
}

