#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

int main(void)
{
  float fArea   = 0;
  float fVolume = 0;

  Cubo* cubo = cubo_inicializa(2);

  cubo_atribui(cubo, 8.0);

  float areaCubo   = cubo_area(cubo);
  float volumeCubo = cubo_volume(cubo);

  printf("Area: %.2f\n", areaCubo);
  printf("Volume: %.2f\n", volumeCubo);

  cubo_libera(cubo);

  return 0;
}
