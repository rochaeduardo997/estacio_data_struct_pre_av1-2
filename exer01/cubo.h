typedef struct cubo Cubo;

Cubo* cubo_inicializa(float fValor);

void cubo_libera(Cubo* c);

float cubo_acesso(Cubo* c);

void cubo_atribui(Cubo* c, float a);

float cubo_area(Cubo* c);

float cubo_volume(Cubo* c);

