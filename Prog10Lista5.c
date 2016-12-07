#include <stdio.h>
int fun(){
	return 1;
}
int main(){
	int a, b;
	a = 10;
	b = a + fun();
	printf("Com a chamada a função pela direita, ");
	printf("b = %d\n", b);
	a = 10;
	b = fun() + a;
	printf("Com a chamada a função pela esquerda, ");
	printf("b = %d\n", b);
	
	
	//resultados:
	//Com a chamada a função pela direita, b = 11
	//Com a chamada a função pela esquerda, b = 11
}
