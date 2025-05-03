#include <stdio.h>

void movimentar_torre(int movimentos)
{
    if (movimentos > 0)
    {
        printf("Direita\n");
        movimentar_torre(movimentos - 1);
    }
}

void movimentar_bispo(int movimentos)
{
    if (movimentos > 0)
    {
        for (int i = 0; i < 1; i++) // Loop Externo
        {
            printf("Cima, ");
            for (int j = 0; j < 1; j++) // Loop Interno
            {
                printf("Direita\n");
            } // Fim do Loop Interno
        } // Fim do Loop Externo
        movimentar_bispo(movimentos - 1);
    }
}

void movimentar_rainha(int movimentos)
{
    if (movimentos > 0)
    {
        printf("Esquerda\n");
        movimentar_rainha(movimentos - 1);
    }
}
int main()
{

    printf("### Movimentos da Torre ###\n");

    movimentar_torre(5);

    printf("\n### Movimentos do Bispo ###\n");

    movimentar_bispo(5);

    printf("\n### Movimentos da Rainha ###\n");

    movimentar_rainha(8);

    printf("\n### Movimentos dp Cavalo ###\n");

    int movimentos_cavalo = 0;

    while (movimentos_cavalo < 2)
    {
        printf("Cima, ");
        for (int i = 0; i < 1 && movimentos_cavalo > 0; i++)
        {
            printf("Direita\n");
        }
        movimentos_cavalo++;
    }

    return 0;
}