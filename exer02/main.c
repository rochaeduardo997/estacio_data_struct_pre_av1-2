#include <stdio.h>

#include "cilindro.h"

int main(void)
{
  float fRaio   = 0;
  float fVolume = 0;
  float fAltura = 0;

  Cilindro* cilindro = cilindro_inicializa();
  cilindro_atribuir(cilindro, 15, 10, 20);

  fRaio   = cilindro_raio(cilindro);
  fVolume = cilindro_volume(cilindro, fRaio);
  fAltura = cilindro_altura(cilindro, fRaio);

  printf("Raio: %.2f\n", fRaio);
  printf("Volume: %.2f\n", fVolume);
  printf("Altura: %.2f\n", fAltura);

  cilindro_libera(cilindro);

  return 0;
}
