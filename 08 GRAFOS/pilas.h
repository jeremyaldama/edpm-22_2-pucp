#ifndef PILAS_H
#define PILAS_H
#include "lep.h"

typedef struct {
	ListaElementoPila contenido;    
} Pila;

void construir_pila(Pila *);
int es_pila_vacia(Pila);
void apilar(Pila *, ElementoPila);
ElementoPila desapilar(Pila *);
ElementoPila cima(Pila);
void destruir_pila(Pila *);

#endif