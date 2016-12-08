Exercício 6 - Lista 9

#include <iostream>
#include "Imc.h"
#include <time.h>

using namespace std;

float CacularImc(float peso, float altura)
{
    float resultado = peso/altura*altura;
    return resultado;
}


int main()
{
    float peso = 80.5;
    float altura = 1.80;
    double resultado = 0;
    Imc imc = Imc();
    clock_t Ticks[2];

    Ticks[0] = clock();
    resultado = imc.CacularImc(peso,altura);
    Ticks[1] = clock();
    double TempoMetodoDinamico = (Ticks[1] - Ticks[0])*1000/ CLOCKS_PER_SEC;


    Ticks[0] = clock();
    resultado = CacularImc(peso,altura);
    Ticks[1] = clock();
    double TempoMetodoEstatico = (Ticks[1] - Ticks[0])*1000/ CLOCKS_PER_SEC;

    cout<<"Tempo do Metodo Dinamico: "<<TempoMetodoDinamico<<endl;
    cout<<"Tempo do Metodo Estatico: "<<TempoMetodoEstatico<<endl;


    /*A chamada do método estático será excutado mais rápido que a chamada dinamicamente
     dependendo do contexto,pois quando chama de forma dinâmica terá desvio no pipeline. */

    return 0;
}
