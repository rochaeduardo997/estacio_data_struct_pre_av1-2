#include <stdio.h>

#include "esfera.h"

int main(void)
{
  float fRaio   = 0;
  float fVolume = 0;
  float fArea   = 0;

  Esfera* esfera = esfera_inicializa();
  esfera_atribuir(esfera, 15, 10, 20);

  fRaio   = esfera_raio(esfera);
  fVolume = esfera_volume(fRaio);
  fArea   = esfera_area(fRaio);

  printf("Raio: %.2f\n", fRaio);
  printf("Volume: %.2f\n", fVolume);
  printf("Area: %.2f\n", fArea);

  return 0;
}
