#include <stdio.h>

void leVetor(int *v, int m){
	int i;
	for(i = 0; i<=m-1; i++){
		scanf("%d", &v[i]);
	}
}

int main(){
	int *N=NULL, m, i;
	scanf("%d", &m);
	N = (int *)malloc(m*sizeof(int));
	leVetor(N, m);

	for (i = 0; i<=m-1; i++){
		printf("%d", N[i]);
	}

	free(N);

	return 0;
}
