#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

       
        int torre = 1, bispo = 1, rainha = 0;

        printf("Desafio Jogo de Xadrez. \n");
        
        //Movimentacao da Torre - 5 casas para a direita. 

        printf("Movimentacao da torre \n");

        for (torre = 1; torre <= 5; torre++)
        {
            printf("Direita. \n");
        }
        
        //Movimentacao do Bispo- 5 casas para a diagonal direita.
        printf("Movimentacao do bispo. \n");

        do
        {
            printf("Para Cima e Direita.\n");

            bispo++;

        } while ( bispo <= 5); 

        //Movimentacao da rainha- 8 casas para esquerda.

        printf("Movimentacao da rainha");

        while (rainha < 9)
        {
            printf("Esquerda. \n");
            rainha++;
        } 

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
