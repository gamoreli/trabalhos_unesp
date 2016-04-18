//Bibliotecas
#include<stdio.h>

int main(){
    int valorPositivo;
    
    do{
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &valorPositivo);
    }while(valorPositivo<=0);
        
    
    while (valorPositivo>=1){   
        for (int i=0; i<valorPositivo; i++){
            printf("%d", i+1);
        }
        printf("\n");
        valorPositivo--;
    }
    return 0;
}