//Bibliotecas
#include<stdio.h>

void Soma(int *m, int n) {
    *m = *m+n;
}

int main(){
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    Soma(&x,y);
    
    printf("Resultado= %d", x);
    
    return 0;
}