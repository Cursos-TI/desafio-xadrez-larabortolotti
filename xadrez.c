#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    //Movimentacao da Torre
void torre( int  movimento) {

    if (movimento > 0)
    {
        printf(" Direita  \n");
        torre(movimento -1);
    }
    
}
    //movimentacao do bispo
void bispo (int movimento) {

    if (movimento > 0)
    {
        
    for (int movBispo = 0; movBispo <= 5; movBispo++);
    {
        printf("Cima e ");

    for (int movbispo = 0; movbispo <= 5; movbispo++);
    {
        printf("Dirreita \n");
    }
    
    }
        bispo(movimento -1);
    }
    
}
    //movimentacao Rainha
void rainha ( int movimento) {

    if (movimento >0)
    {
        printf("Esquerda \n");
        rainha(movimento -1);
    }
    
}

int main() {

       //movimentacao Torre    
   
    printf("Movimentacao Torre");
    torre(5);
    printf("\n");

    //Movimentacao bispo- Diagonal

    printf("Movimentacao bispo \n");
    bispo(5);
    printf("\n");

    //movimentacao rainha 

    printf("Movimentacao Rainha \n");
    rainha(8);
    printf("\n");

    //Movimentacao Cavalo
    int cavalo = 1;
    int h;
    int v;
    printf("Movimentacao do Cavalo\n");

    while (cavalo < 2)
            { for ( int v = 0; v < 2; v++)
            {
                printf("Cima \n");
            } for (h = 1; h <=1; h++)
            {
                printf("Esquerda \n");
            }
            
        
                cavalo++;
            }
      
                
    return 0;        
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

