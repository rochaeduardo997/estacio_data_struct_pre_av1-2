typedef struct esfera Esfera;

Esfera* esfera_inicializa();

void esfera_libera(Esfera* e);

void esfera_atribuir(Esfera* e, float fDiametro, float fVolume, float fArea);

float esfera_raio(Esfera* e);

float esfera_area(float fRaio);

float esfera_volume(float fRaio);
