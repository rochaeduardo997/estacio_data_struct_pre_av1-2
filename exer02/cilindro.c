#include <stdlib.h>

#include "cilindro.h"

#define PI 3.14

struct cilindro
{
  float fDiametro;
  float fVolume;
  float fAltura;
};

Cilindro* cilindro_inicializa()
{
  Cilindro* c = (Cilindro*)malloc(sizeof(Cilindro));

  if(c == NULL) exit(1);

  return c;
}

void cilindro_libera(Cilindro* c)
{
  free(c);
}

float cilindro_acesso_diametro(Cilindro* c)
{
  return c->fDiametro;
}

void cilindro_atribuir(Cilindro* c, float fDiametro, float fVolume, float fAltura)
{
  c->fDiametro = fDiametro;
  c->fVolume   = fVolume;
  c->fAltura   = fAltura;
}

float cilindro_altura(Cilindro* cilindro, float fRaio)
{
  return fRaio * fRaio * PI / cilindro->fVolume; 
}

float cilindro_raio(Cilindro* cilindro)
{
  return cilindro->fDiametro / 2; 
}

float cilindro_volume(Cilindro* cilindro, float fRaio)
{
  return fRaio * fRaio * PI * cilindro->fAltura;
}
