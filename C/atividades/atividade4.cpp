//Bibliotecas
#include<stdio.h>

int main(){
    float valores[4], media, maiorValor, menorValor, percentualMaior, percentualMenor;
       
    for (int i=0; i<4; i++){
        scanf("%f", &valores[i]);
        if (i==0)
            maiorValor=menorValor=valores[i];
        else{
            if (maiorValor<valores[i])
                maiorValor=valores[i];
            if (menorValor>valores[i])
                menorValor=valores[i];
        }
        media += valores[i];
    }
    media /= 4;
    for (int i=0; i<4;i++){
        if (valores[i]<media)
            percentualMenor++;
        else if(valores[i]>media)
            percentualMaior++;
    }
    
    printf("Média = %.2f", media);
    printf("\n");
    printf("Razão maior/menor valor = %.2f", maiorValor/menorValor);
    printf("\n");
    printf("Percentual de valor acima da média = %.2f", (percentualMaior/4)*100);
    printf("\n");
    printf("Percentual de valor abaixo da média = %.2f", (percentualMenor/4)*100);
    return 0;
}