/* TAD: Círculo */
/* Interface circulo.h */

/* Dependência de módulos: interface ponto.h incluída na interface pois
   a operação "interior" faz uso do tipo Ponto
*/
#include "ponto.h"

/* Tipo exportado */
typedef struct circulo Circulo;

/* Funções exportadas */
/* Função cria - Aloca e retorna um círculo com centro (x,y) e raio r */
Circulo* circ_cria (float x, float y, float r);

/* Função libera - Libera a memória de um círculo previamente criado */
void circ_libera (Circulo* c);

/* Função area - Retorna o valor da área do círculo */
float circ_area (Circulo* c);

/* Função interior - Verifica se um dado ponto p está dentro do círculo */
int circ_interior (Circulo* c, Ponto* p);

