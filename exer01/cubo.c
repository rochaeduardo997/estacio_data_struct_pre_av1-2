#include <stdlib.h>

#include "cubo.h"

struct cubo
{
  float fArea;
};

Cubo* cubo_inicializa(float fValor)
{
  Cubo* c = (Cubo*)malloc(sizeof(Cubo));

  if(c == NULL) exit(1);
  
  return c;
}

void cubo_libera(Cubo* c)
{
  free(c);
}

float cubo_acesso(Cubo* c)
{
  return c->fArea;
}

void cubo_atribui(Cubo* c, float fValor)
{
  c->fArea = fValor;
}

float cubo_area(Cubo* c)
{
  return 6 * c->fArea * c->fArea;
}

float cubo_volume(Cubo* c)
{
  return c->fArea * c->fArea * c->fArea;
}

