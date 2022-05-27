#include <stdlib.h>

#include "esfera.h"

#define PI 3.14

struct esfera
{
  float fDiametro;
  float fVolume;
  float fArea;
};

Esfera* esfera_inicializa()
{
  Esfera* e = (Esfera*)malloc(sizeof(Esfera));

  if(e == NULL) exit(1);

  return e;
}

void esfera_libera(Esfera* e)
{
  free(e);
}

float esfera_acesso_diametro(Esfera* e)
{
  return e->fDiametro;
}

void esfera_atribuir(Esfera* e, float fDiametro, float fVolume, float fArea)
{
  e->fDiametro = fDiametro;
  e->fVolume   = fVolume;
  e->fArea     = fArea;
}

float esfera_raio(Esfera* esfera)
{
  return esfera->fDiametro / 2;
}

float esfera_area(float fRaio)
{
  return 4 * PI * fRaio * 2;
}

float esfera_volume(float fRaio)
{
  return 4 * PI * (fRaio * fRaio * fRaio) / 3;
}
