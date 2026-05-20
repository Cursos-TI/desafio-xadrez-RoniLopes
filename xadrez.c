#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        moverTorre(casas - 1);
        printf("%d - Mover Torre uma casa para a direita\n", casas);  
        
    }
    
}
 

void moverBispo(int casas) {
    if (casas > 0) {
        moverBispo(casas - 1);
        printf("%d - Mover Bispo uma casa na diagonal para cima e a direita\n", casas);  
        
    }

}


void moverRainha(int casas) {
    if (casas > 0) {
        moverRainha(casas - 1);
        printf("%d - Mover Rainha uma casa para a esquerda\n", casas);  
        
    }

}

 
int main() {

    moverTorre(5);
    printf("\n");
    moverBispo(5);
    printf("\n");
    moverRainha(8);
    printf("\n");


    char peca4[10] = "Cavalo";
    int movimentoCompleto = 1;
    int i = 1;

    while (movimentoCompleto--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%d - %s - Mover uma casa para baixo\n", i, peca4);
        }
        
        printf("%d - %s - Mover uma casa para a esquerda\n", i, peca4);
    }

    return 0;
}
