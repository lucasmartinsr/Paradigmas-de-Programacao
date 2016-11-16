#include "Imc.h"

Imc::Imc(){}

float Imc::CacularImc(float peso, float altura)
{
    float resultado = peso/altura*altura;
    return resultado;
}
