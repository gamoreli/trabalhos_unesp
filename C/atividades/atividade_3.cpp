//Bibliotecas
#include<stdio.h>

void f2(int *m, int n) {
    *m = *m-n;
}

void f1(int *m, int n) {
    *m = *m+1;
    f2(m,n);
}

int main(){
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    f1(&x,x+y);
    
    printf("Resultado= %d", x);
    
    return 0;
}