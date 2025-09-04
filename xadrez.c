#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


   
    // Movimento da torre - Função recursiva

    void moverTorre(int casa) {
        if (casa > 0)
        {
            printf("Direita\n");
            moverTorre(casa -1);
        }
        

    }
    

    int main() {

    // Declarando variáveis quantidade movimento
    int movTorre = 5;
    
    
    //Parâmetro da função - Torre
    printf("Movimento da Torre\n");
    movTorre(moverTorre);
    
    
    /*
    
    //Movimento Bispo (Diagonal) - Utilizando Estrutura Repetição While.

    //Declarando variáveis Bispo. 
    int movBispo = 5;
    int i = 0;

    printf("Movimento do Bispo\n");
    
    while (i < movBispo)
    {
        printf("Cima Direita\n");
        i++;
    }    
    printf("\n");
    
    
    
    //Movimento da Torre (Vertical/Horizontal) - Utilizando Estrutura Repetição For.

    //Declarando variáveis torre.
    int movTorre = 5;

    printf("Movimento da Torre\n");

    for (int i = 0; i < movTorre; i++)
    {
        printf("Direita\n");
    }
    printf("\n");

    
    //Movimento da Rainha (Qualquer movimento) - Utilizando Estrutura Repetição Do While.

    //Declarando variáveis Rainha.
    int movRainha = 8;
    int j = 0;

    printf("Movimento da Rainha\n");

    do
    {
        printf("Esquerda\n");
        j++;
    } while (j < movRainha);

    printf("\n");


    
    //Movimento do Cavalo - Movimento em "L" - Utilizando Duas Estruturas de Repetição (While e For).
             
    //Declarando 
    int moviCavalo = 2 ;
    int l;

    printf("Movimento do Cavalo\n");

        while (l < moviCavalo)
    {
        for (int k = 0; k < moviCavalo; k++)
        {
            printf("Baixo\n");
        }
        l++;
        printf("Esquerda\n");

    }
    
    printf("\n");
    

    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
*/
    return 0;
}
