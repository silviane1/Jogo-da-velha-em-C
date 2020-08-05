#include "l.h"
#include "jogo.h"
int main(int argc, char **argv)
{
    
    int i,j,acabou;
    char M[3][3]={{' ',' ',' '},
                  {' ',' ',' '},
                  {' ',' ',' '}};
  	imprime(M);
    printf("Escolha a linha e a coluna: "); /* escolhe a jogada por coordenadas*/
    scanf("%d%d",&i,&j);
    M[i][j]='X'; /*coloca o X na posição lida*/
    clean();
    imprime(M);
    pauses(1000000);
    primeirajogada(M,i,j);  /* estratégia da primeira jogada*/  	
    
     acabou=0;
	 while(acabou==0){
        printf("Escolha a linha e a coluna: ");
        scanf("%d%d",&i,&j);
        if(M[i][j]==' '){ /* a casa desejada tem que estar vazia pra poder colocar o X*/
            M[i][j]='X';
        }
        else{
            printf("Casa ocupadada\nEscolha outra linha e coluna: ");
            scanf("%d%d",&i,&j);
            M[i][j]='X';
        }
        clean();
        imprime(M);/* imprime o tabuleiro*/
	    procura(M);/*estratégia do computador*/
        acha(M,&acabou);     /*verifica se há vencedor*/    
    }

    return 0;
}
