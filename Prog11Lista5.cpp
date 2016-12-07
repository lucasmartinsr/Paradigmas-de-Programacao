#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int k = 1;
	float j = 1.0;
	clock_t Ticks[2];
	
    Ticks[0] = clock();
	for(int i = 1; i < 20; i++){
		k = k*i;
	}
	Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
	cout<<"\n tempo do inteiro = "<< Tempo;
	cout<<"\n valor do inteiro = "<< k;
	
	Ticks[0] = clock();
	for(int i = 1; i < 20; i++){
		j = j*i;
	}
	Ticks[1] = clock();
    double Tempo2 = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
	cout<<"\n tempo do ponto flutuante = "<< Tempo2;
	cout<<"\n valor do ponto flutuante = "<< j;
	
	//resultados:
	//valor do inteiro = 109641728
    	//valor do ponto flutuante = 1.21645e+017
}
