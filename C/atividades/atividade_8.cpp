//Bibliotecas
#include<stdio.h>
#include<math.h>

int Fatorial(int numero){
    if (numero == 1)
        return numero;
    else
        return numero * Fatorial(numero-1);
}

float CalcularCosseno(int numero, int termos){
    int cont = 2;
    float cosseno = 0;
    for(int i=1; i<=termos; i++){
        if (i == 1)
            cosseno = 1 - pow(numero, cont)/Fatorial(cont);
        else if (i % 2 == 0)
            cosseno = cosseno + pow(numero, cont)/Fatorial(cont);
        else
            cosseno = cosseno - pow(numero, cont)/Fatorial(cont);
            
        cont+=2;
    }
    
    return cosseno;
}

int main(){
    int numero, termos =0;
    printf("Digite o valor do numero e a quantidade de termos: ");
    scanf("%d", &numero);
    do{
        scanf("%d", &termos);
    }while(termos<0);
    
    printf("Resultado= %f", CalcularCosseno(numero, termos));
    
    return 0;
}