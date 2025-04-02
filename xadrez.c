#include <stdio.h>

//Declaração das variáveis
int peca, i=0;
//Posição inicial das peças
int torre = 11, bispo = 31, rainha = 58, cavalo=47, movimento=0, direcao, casas;
void movertorre(int quantidade) {   
    switch (movimento)
    {
    case 1:
        if (quantidade > 0 ) {
        torre = torre + 10;
        printf("Cima\n");
        movertorre(quantidade - 1);
    }
    break;
    case 2:
        if (quantidade > 0 ) {
        torre = torre - 10;
        printf("Baixo\n");
        movertorre(quantidade - 1);
    }
    break;
    case 3:
        if (quantidade > 0 ) {
        torre = torre - 1;
        printf("Esquerda\n");
        
        movertorre(quantidade - 1);
    }
    break;
    case 4:
        if (quantidade > 0 ) {
        torre = torre + 1;
        printf("Direita\n");
        movertorre(quantidade - 1);
    }
    break;
    default:
            printf("Escolha uma das opções disponíveis!");
        break;
    }
}
void moverbispo(int quantidade)
    {
    switch (movimento)
    {
    case 1:
        if (quantidade > 0 ) {
            bispo = bispo + 10;
            bispo = bispo + 1;
            printf("Cima e direita\n");
            moverbispo(quantidade - 1);
    }
    break;
    case 2:
        if (quantidade > 0 ) {
            bispo = bispo - 10;
            bispo = bispo + 1;
            printf("Baixo e direita\n");
            moverbispo(quantidade - 1);
    }
    break;
    case 3:
        if (quantidade > 0 ) {
            bispo = bispo + 10;
            bispo = bispo - 1;
            printf(" Cima e esquerda\n");     
            moverbispo(quantidade - 1);
    }
    break;
    case 4:
        if (quantidade > 0 ) {
            bispo = bispo - 10;
            bispo = bispo - 1;
            printf("Baixo e esquerda\n");
            moverbispo(quantidade - 1);
    }
    break;
    default:
            printf("Escolha uma das opções disponíveis!");
        break;
    }
    }
void moverrainha(int quantidade)
    {
        switch (movimento)
    {
    case 1:
        if (quantidade > 0 ) {
            rainha = rainha + 10;
            printf("Cima\n");
            moverrainha(quantidade - 1);
    }
    break;
    case 2:
        if (quantidade > 0 ) {
            rainha = rainha - 10;
            printf("Baixo\n");
            moverrainha(quantidade - 1);
    }
    break;
    case 3:
        if (quantidade > 0 ) {
            rainha = rainha - 1;
            printf("Esquerda\n");
            moverrainha(quantidade - 1);
    }
    break;
    case 4:
        if (quantidade > 0 ) {
            rainha = rainha + 1;
            printf("Direita\n");
            moverrainha(quantidade - 1);
    }
    break;
    case 5:
        if (quantidade > 0 ) {
            rainha = rainha + 10;
            rainha = rainha + 1;
            printf("Cima e direita\n");
            moverrainha(quantidade - 1);
    }
    break;
    case 6:
        if (quantidade > 0 ) {
            rainha = rainha - 10;
            rainha = rainha + 1;
            printf("Baixo e direita\n");
            moverrainha(quantidade - 1);
    }
    break;
    case 7:
        if (quantidade > 0 ) {
            rainha = rainha + 10;
            rainha = rainha - 1;
            printf(" Cima e esquerda\n");     
            moverrainha(quantidade - 1);
    }
    break;
    case 8:
        if (quantidade > 0 ) {
            rainha = rainha - 10;
            rainha = rainha - 1;
            printf("Baixo e esquerda\n");
            moverrainha(quantidade - 1);
    }
    break;
    default:
            printf("Escolha uma das opções disponíveis!");
        break;
    }
    }
void movercavalo(int quantidade)
    {
        switch (movimento)
    {
    case 1:
        if (quantidade > 0 ) {
            for (i = 0; i < 1; i++)//Movimento para cima
            {
                for (int j = 0; j < 2; j++)//Movimento para esquerda
            {
                    cavalo = cavalo -1;
                    printf("Esquerda\n");
            }
                cavalo = cavalo + 10;
                printf("Cima\n");
            }
            movercavalo(quantidade - 1);
        }

    break;

    case 2:
    if (quantidade > 0 ) {
        for (i = 0; i < 1; i++)//Movimento para cima
        {
            for (int j = 0; j < 2; j++)//Movimento para esquerda
        {
                cavalo = cavalo -1;
                printf("Esquerda\n");
        }
            cavalo = cavalo -10;
            printf("Baixo\n");
        }
        movercavalo(quantidade - 1);
    }
    break;
    case 3:
    if (quantidade > 0 ) {
        for (i = 0; i < 1; i++)//Movimento para cima
        {
            for (int j = 0; j < 2; j++)//Movimento para esquerda
        {
                cavalo = cavalo +1;
                printf("Direita\n");
        }
            cavalo = cavalo +10;
            printf("Cima\n");
        }
        movercavalo(quantidade - 1);
    }
    break;
    case 4:
    if (quantidade > 0 ) {
        for (i = 0; i < 1; i++)//Movimento para cima
        {
            for (int j = 0; j < 2; j++)//Movimento para esquerda
        {
                cavalo = cavalo +1;
                printf("Direita\n");
        }
            cavalo = cavalo -10;
            printf("Baixo\n");
        }
        movercavalo(quantidade - 1);
    }
    break;
    case 5:
    if (quantidade > 0 ) {
        for (i = 0; i < 1; i++)//Movimento para cima
        {
            for (int j = 0; j < 2; j++)//Movimento para esquerda
        {
                cavalo = cavalo +10;
                printf("Cima\n");
        }
            cavalo = cavalo +1;
            printf("Direita\n");
        }
        movercavalo(quantidade - 1);
    }
    break;
    case 6:
    if (quantidade > 0 ) {
        for (i = 0; i < 1; i++)//Movimento para cima
        {
            for (int j = 0; j < 2; j++)//Movimento para esquerda
        {
                cavalo = cavalo -10;
                printf("Baixo\n");
        }
            cavalo = cavalo +1;
            printf("Direita\n");
        }
        movercavalo(quantidade - 1);
    }
    break;
    case 7:
    if (quantidade > 0 ) {
        for (i = 0; i < 1; i++)//Movimento para cima
        {
            for (int j = 0; j < 2; j++)//Movimento para esquerda
        {
                cavalo = cavalo +10;
                printf("Cima\n");
        }
            cavalo = cavalo -1;
            printf("Esquerda\n");
        }
        movercavalo(quantidade - 1);
    }
    break;
    case 8:
    if (quantidade > 0 ) {
        for (i = 0; i < 1; i++)//Movimento para cima
        {
            for (int j = 0; j < 2; j++)//Movimento para esquerda
        {
                cavalo = cavalo -10;
                printf("Baixo\n");
        }
            cavalo = cavalo -1;
            printf("Esquerda\n");
        }
        movercavalo(quantidade - 1);
    }
    break;
    default:
            printf("Escolha uma das opções disponíveis!");
        break;
    
    }
}

//A cada movimento vertical soma 10 ou subtrai 10
//A cada movimento horizontal soma 1 ou subtrai 1

int main () {
    //Demonstração do tabuleiro
    printf("Posição inicial das peças:\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("80 |   81    |   82    |   83    |   84    |   85    |   86    |   87    |   88    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("70 |   71    |   72    |   73    |   74    |   75    |   76    |   77    |   78    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("60 |   61    |   62    |   63    |   64    |   65    |   66    |   67    |   68    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |  Rainha |\n");
    printf("50 |   51    |   52    |   53    |   54    |   55    |   56    |   57    |   58    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |  Cavalo |         |\n");
    printf("40 |   41    |   42    |   43    |   44    |   45    |   46    |   47    |   48    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |  Bispo  |         |         |         |         |         |         |         |\n");
    printf("30 |   31    |   32    |   33    |   34    |   35    |   36    |   37    |   38    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("20 |   21    |   22    |   23    |   24    |   25    |   26    |   27    |   28    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |  Torre  |         |         |         |         |         |         |         |\n");
    printf("10 |   11    |   12    |   13    |   14    |   15    |   16    |   17    |   18    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |    1    |    2    |    3    |    4    |    5    |    6    |    7    |    8    |\n");

    printf("Selecione a peça para mover:\n\n");
    printf(" 1 - Torre \n");
    printf(" 2 - Bispo \n");
    printf(" 3 - Rainha \n");
    printf(" 4 - Cavalo \n");
    printf("Escolha: ");
    scanf("%d",&peca);
    switch (peca)
    {
        case 1://movimento da Torre
            printf("A torre está na casa %d\n",torre);
            printf("Qual a direção do movimento?\n");
            printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
            scanf("%d", &movimento);
            printf("Quantas casas a torre vai andar?");
            scanf("%d", &casas);
            movertorre(casas);
            printf("A torre moveu-se para a casa %d\n", torre);
        break;
        case 2://movimento do Bispo
            printf("O bispo está na casa %d\n",bispo);
            printf("Qual a direção do movimento?\n");
            printf("1 - Cima e direita\n2 - Baixo e direita\n3 - Cima e esquerda\n4 - Baixo e esquerda\n");
            scanf("%d", &movimento);
            printf("Quantas casas o bispo vai andar?");
            scanf("%d", &casas);
            moverbispo(casas);
            printf("O bispo moveu-se para a casa %d\n", bispo);
        break;
        case 3://movimento da Rainha
            printf("A rainha está na casa %d\n",rainha);
            printf("Qual a direção do movimento?\n");
            printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n5 - Cima e direita\n6 - Baixo e direita\n7 - Cima e esquerda\n8 - Baixo e esquerda\n");
            scanf("%d", &movimento);
            printf("Quantas casas a rainha vai andar?");
            scanf("%d", &casas);
            moverrainha(casas);
            printf("A Rainha moveu-se para a casa %d\n",rainha);
        break;
        case 4://movimento do Cavalo
            printf("O Cavalo está na casa %d\n",cavalo);
            printf("Qual a direção do movimento?\n");
            printf("1 - Esquerda e cima\n2 - Esquerda e baixo\n3 - Direita e cima\n4 - Direita e baixo\n5 - Cima e direita\n6 - Baixo e direita\n7 - Cima e esquerda\n8 - Baixo e esquerda\n");
            scanf("%d", &movimento);
            printf("O cavalo sempre anda 3 casas em forma de 'L' na direção escolhida\n");
            casas = 1;//quantidade de repetições da função.
            movercavalo(casas);
            printf("O cavalo moveu-se para a casa %d\n",cavalo);
        break;
    
    default:
            printf("Selecione um dos movimentos disponíveis!");
        break;
    }

return 0;
}