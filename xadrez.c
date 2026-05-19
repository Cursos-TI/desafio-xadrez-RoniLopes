#include <stdio.h>

// #include <stdio.h>
 
int main() {

    char peca1[10] = "Torre";
    char peca2[10] = "Bispo";
    char peca3[10] = "Rainha";
    

    for (int i = 1; i <= 5; i++) 
    {
        printf("%d - %s - Mover uma casa para a direita\n", i, peca1);
    }

    int i = 1;    
   
    while (i <= 5)  
        {
        printf("%d - %s - Mover uma casa na diagonal para cima e a direita\n", i, peca2); 
        i++;    
    }

    i = 1;
   
    do {                    
        
        printf("%d - %s - Mover uma casa para a esquerda\n", i, peca3);  
        i++;                
        
    } while (i <= 8);       

                

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
