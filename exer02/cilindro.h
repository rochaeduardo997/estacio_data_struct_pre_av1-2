typedef struct cilindro Cilindro;

Cilindro* cilindro_inicializa();

void cilindro_libera(Cilindro* c);

void cilindro_atribuir(Cilindro* c, float fDiametro, float fVolume, float fAltura);

float cilindro_altura(Cilindro* cilindro, float fRaio);

float cilindro_raio(Cilindro* cilindro);

float cilindro_volume(Cilindro* cilindro, float fRaio);

