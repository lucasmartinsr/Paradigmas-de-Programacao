#include <stdio.h>
int fun(int *k){
	*k += 4;
	return 3 * (*k) - 1;
}
int main(){
	int i = 10, j = 10, soma1, 
	soma2;
	soma1 = (i / 2) + fun(&i);
	soma2 = fun(&j) + (j / 2);
	printf("\nsoma1 = %d\n", soma1);
	printf("\nsoma2 = %d\n", soma2);
	
	//resultados:
	//soma1 = 46
	//
	//soma2 = 48
}
