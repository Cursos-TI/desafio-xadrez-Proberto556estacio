#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

   
    // Movimento da Torre - Função recursiva

    void moverTorre(int casa) {
        if (casa > 0)
        {
            printf("Direita\n");    //Imprime posição torre
            moverTorre(casa -1);    //Chama a si mesmo com casa -1
        }      
    }
    

    // Movimento da Rainha - Função recursiva
    void moverRainha(int casa){
        if (casa > 0)
        {
           printf("Esquerda\n");    //Imprime posição torre
           moverRainha(casa -1);    //Chama a si mesmo com casa -1              
        }      
    }
        
    // Movimento do Bispo - Função recursiva + loops 
    void moverBispo(int movimentosRestantes, int i) {
    if (movimentosRestantes <= 0);

    // Loop aninhado simples
    for (int j = 0; j <= i; j++) {
        if (i == j) {
            printf("Cima Direita\n");
            movimentosRestantes--;
            break; // imprime uma vez por chamada recursiva
        }
    }

    // Próxima chamada recursiva
    moverBispo(movimentosRestantes, i + 1);
}


 

       
    int main() {

    // Declaração movimentos desejados por peça 
          
    int movTorre = 5;
    int movRainha = 8;
    int movBispo = 5; 
    
    // Movimento da Torre
    printf("Movimento da Torre\n");
    moverTorre(movTorre);
    printf("\n");
    
    // Movimento da Rainha
    printf("Movimento da Rainha\n");
    moverRainha(movRainha);
    printf("\n");

    // Movimento do Bispo 
    printf("Movimento do Bispo\n");
    moverBispo(movBispo, 0);
    printf("\n");
    
        

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
