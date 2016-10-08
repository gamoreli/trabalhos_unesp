#include <stdio.h>

int main(){
	int *N = NULL, m, i;

	//m = 8;
	//N = &m;
	scanf("%d", &m);
	N = (int *) malloc(m * sizeof(int));
	for (i = 0; i<=m-1; i++){
		scanf("%d", &N[i]);
		printf("Endereco do ponteiro %d \n", &N[i]);
		printf("Conteudo do ponteiro %d \n", *N);		
		printf("Ponteiro %d \n", N[i]);
	}
	free(N);
	
	// printf("Endereco do ponteiro %d \n", &N);
	// printf("Conteudo do ponteiro %d \n", *N);
	// scanf("%d", N);
	// printf("Conteudo do ponteiro %d \n", *N);
	// printf("Ponteiro %d", N);

	return 0;
}
