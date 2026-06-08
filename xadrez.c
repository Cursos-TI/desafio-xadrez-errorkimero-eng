#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//meu código recursivo
void moverTorre(int casas)
{
    if (casas == 0)
    {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

int main() {

    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     printf("*****Bispo*****\n");
    
    int Bispo, b = 1; //diagonal
    printf("Quantas casas o bisbo vai se mover? \n");
    scanf("%d", &Bispo);

    while(b <= Bispo)
    {
        printf("DIAGONAL \n");
        b++;

    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
     printf("*****Torre*****\n");

    int Torre, direcao; //frente
    printf("Quantas casas a Torre vai se mover? \n");
    scanf("%d", &Torre);
    
    do{
        printf("Qual a direcao que a torre ira se mover?\n");
        printf("1 - Esquerda \n");
        printf("2 - Direita \n");
        scanf("%d", &direcao);
        
    }while (direcao != 1 && direcao != 2);

    for (int i = 0; i < Torre; i++)
    {
        if (direcao == 1){
            printf("Esqueda\n");
        }else {
            printf("Direta\n");
        }
    }
    





    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     printf("*****Rainha*****\n");

    int rainha, i = 0;

    printf("Quantas casa a rainha ira se mover a esquerda? \n");
    scanf("%d", &rainha);

    while (i < rainha)

    {
        printf("Esquerda\n");
        i++;
    }
    
    



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("*****Cavalo***** \n");

for(int i = 1; i <= 1; i++)
{
    int j = 1;

    while(j <= 2)
    {
        printf("Baixo\n");
        j++;
    }

    printf("Esquerda\n");
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("*****Torre Recursiva*****\n");
moverTorre(5);
    
    
    
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
