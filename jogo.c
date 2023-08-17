#include <stdio.h>

int main(){

    printf("Bem vindo ao nosso jogo da advinhação\n");

    int numerosecreto  = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);

    if(acertou){
        printf("Parabéns você acertou!\n");
        printf("Você é um bom jogador, jogue novamente!");
    }

    else{
        if(chute > numerosecreto){
            printf("Seu chute foi maior que o numero secreto.\n");
        }

        if(chute < numerosecreto){
            printf("Seu chute foi menor que o numero secreto.\n");
        }

        printf(" Você errou, tente novamente!");
    }

    return 0;

    // Socorro
    // Teste
}