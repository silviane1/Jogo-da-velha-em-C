#include"jogo.h"
void imprime(char M[3][3])
{
    printf("Jogador: X\nComputador: O\n");
    printf("  0   1   2\n");
    printf("0 %c | %c | %c\n-------------\n",M[0][0],M[0][1],M[0][2]);
    printf("1 %c | %c | %c\n-------------\n",M[1][0],M[1][1],M[1][2]);
    printf("2 %c | %c | %c\n\n",M[2][0],M[2][1],M[2][2]);

}
void acha(char M[3][3], int *acabou)
{
    int i,j,casa;
    if((M[0][0]=='O' && M[0][1]=='O' && M[0][2]=='O') || (M[1][0]=='O' && M[1][1]=='O' && M[1][2]=='O') || (M[2][0]=='O' && M[2][1]=='O' && M[2][2]=='O') || (M[0][0]=='O' && M[1][1]=='O' && M[2][2]=='O') || (M[0][2]=='O' && M[1][1]=='O' && M[2][0]=='O') || (M[0][0]=='O' && M[1][0]=='O' && M[2][0]=='O') || (M[0][1]=='O' && M[1][1]=='O' && M[2][1]=='O') || (M[0][2]=='O' && M[1][2]=='O' && M[2][2]=='O') ){
        printf("Ganhador: Computador \n");
        *acabou=1;
        }
    casa=0;
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(M[i][j]==' '){
                    casa++;
                }
    
            }
        }
    
    if(casa==0){
        printf("Empate\n");
        *acabou=1;    
    }    
}
void primeirajogada(char M[3][3],int i,int j)
{
    if(i==1 && j==1){
        M[2][0]='O';
        clean();
        imprime(M);
			
    }
    else if((i==0 && j==0)|| (i==0 && j==2) || (i==2 && j==0) || (i==2 && j==2)){
        M[1][1]='O';
			clean();
			imprime(M);
			
		}
		else if((i==0 && j==1) || (i==1 && j==0)){
            		M[0][0]='O';
            		clean();
            		imprime(M);
			
			
        	}
        	else if(i==2 && j==1){
            		M[2][0]='O';
            		clean();
            		imprime(M);
			
        	}
        	else if(i==1 && j==2){
            		M[0][2]='O';
            		clean();
            		imprime(M);
			
       		}


}

void procura(char M[3][3])
{

        int i,j;
            /* IA*/
        if( M[0][0]=='O' && M[0][1]=='O' && M[0][2]==' '){ /* fecha o final da fileira 1*/
            clean();
            imprime(M);
            M[0][2]='O';
            pauses(1000000);
            clean();
		    imprime(M);
        }
            
        else if( M[0][0]=='O' && M[0][2]=='O' && M[0][1]==' '){ /* fecha o meio da fileira 1*/
            clean();
            imprime(M);
            M[0][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[0][1]=='O' && M[0][2]=='O' && M[0][0]==' '){ /* fecha o começo da fileira 1*/
            clean();
            imprime(M);
		    M[0][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[1][0]=='O' && M[1][1]=='O' && M[1][2]==' '){ /* fileira 2*/
            clean();
            imprime(M);
            M[1][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[1][1]=='O' && M[1][2]=='O' && M[1][0]==' '){
            clean();
            imprime(M);
		    M[1][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[1][0]=='O' && M[1][2]=='O' && M[1][1]==' '){
            clean();
            imprime(M);
		    M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[2][0]=='O' && M[2][1]=='O'&& M[2][2]==' '){ /*fileira 3*/
            clean();
            imprime(M);
            M[2][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else if( M[2][1]=='O' && M[2][2]=='O' && M[2][0]==' '){
            clean();
            imprime(M);
		    M[2][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[2][0]=='O' && M[2][2]=='O' && M[2][1]==' '){
            clean();
            imprime(M);
		    M[2][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[0][0]=='O' && M[1][1]=='O' && M[2][2]==' '){ /*diagonal primaria*/
            clean();
            imprime(M);
		    M[2][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[1][1]=='O' && M[2][2]=='O' && M[0][0]==' '){
            clean();
            imprime(M);
            M[0][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[0][0]=='O' && M[2][2]=='O' && M[1][1]==' '){
            clean();
            imprime(M);
		    M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }

        else if( M[0][2]=='O' && M[1][1]=='O' && M[2][0]==' '){ /*diagonal secundaria*/
            clean();
            imprime(M);
            M[2][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[1][1]=='O' && M[2][0]=='O' && M[0][2]==' '){
            clean();
            imprime(M);
		    M[0][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[0][2]=='O' && M[2][0]=='O' && M[1][1]==' '){
            clean();
            imprime(M);
            M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][0]=='O' && M[1][0]=='O' && M[2][0]==' '){ /*primeira coluna*/
            clean();
            imprime(M);
            M[2][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][0]=='O' && M[2][0]=='O' && M[1][0]==' '){ 
            clean();
            imprime(M);
            M[1][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[1][0]=='O' && M[2][0]=='O' && M[0][0]==' '){ 
            clean();
            imprime(M);
            M[0][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][1]=='O' && M[1][1]=='O' && M[2][1]==' '){ /* segunda coluna*/
            clean();
            imprime(M);
            M[2][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[1][1]=='O' && M[2][1]=='O' && M[0][1]==' '){
            clean();
            imprime(M);
            M[0][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][1]=='O' && M[2][1]=='O' && M[1][1]==' '){
            clean();
            imprime(M);
            M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else if( M[0][2]=='O' && M[1][2]=='O' && M[2][2]==' '){ /*terceira coluna*/
            clean();
            imprime(M);
            M[2][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else if( M[0][2]=='O' && M[2][2]=='O' && M[1][2]==' '){ 
            clean();
            imprime(M);
            M[1][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[2][2]=='O' && M[1][2]=='O' && M[0][2]==' '){
            clean();
            imprime(M);
            M[0][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        /*jogador*/
        else if( M[0][0]=='X' && M[0][1]=='X' && M[0][2]==' ' ){ /* fecha o final da fileira 1*/
            clean();
            imprime(M);
            M[0][2]='O';
            pauses(1000000);
            clean();
		    imprime(M);
	    	
        }
            
        else if( M[0][0]=='X' && M[0][2]=='X' && M[0][1]==' '){ /* fecha o meio da fileira 1*/
            clean();
            imprime(M);
            M[0][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[0][1]=='X' && M[0][2]=='X' && M[0][0]==' '){ /* fecha o começo da fileira 1*/
            clean();
            imprime(M);
		    M[0][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[1][0]=='X' && M[1][1]=='X' && M[1][2]==' '){ /* fileira 2*/
            clean();
            imprime(M);
            M[1][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[1][1]=='X' && M[1][2]=='X' && M[1][0]==' '){
            clean();
            imprime(M);
		    M[1][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[1][0]=='X' && M[1][2]=='X'&& M[1][1]==' '){
            clean();
            imprime(M);
		    M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[2][0]=='X' && M[2][1]=='X' && M[2][2]==' '){ /*fileira 3*/
            clean();
            imprime(M);
            M[2][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else if( M[2][1]=='X' && M[2][2]=='X' && M[2][0]==' '){
            clean();
            imprime(M);
		    M[2][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[2][0]=='X' && M[2][2]=='X' && M[2][1]==' '){
            clean();
            imprime(M);
		    M[2][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[0][0]=='X' && M[1][1]=='X' && M[2][2]==' '){ /*diagonal primaria*/
            clean();
            imprime(M);
		    M[2][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[1][1]=='X' && M[2][2]=='X' && M[0][0]==' '){
            clean();
            imprime(M);
            M[0][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[0][0]=='X' && M[2][2]=='X' && M[1][1]==' ' ){
            clean();
            imprime(M);
		    M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[0][2]=='X' && M[1][1]=='X' && M[2][0]==' '){ /*diagonal secundaria*/
            clean();
            imprime(M);
            M[2][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
	    else if( M[1][1]=='X' && M[2][0]=='X' && M[0][2]==' '){
            clean();
            imprime(M);
		    M[0][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
	    }
        else if( M[0][2]=='X' && M[2][0]=='X' && M[1][1]==' '){
            clean();
            imprime(M);
            M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][0]=='X' && M[1][0]=='X'&& M[2][0]==' '){ /*primeira coluna*/
            clean();
            imprime(M);
            M[2][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][0]=='X' && M[2][0]=='X' &&  M[1][0]==' '){ 
            clean();
            imprime(M);
            M[1][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[1][0]=='X' && M[2][0]=='X' && M[0][0]==' '){ 
            clean();
            imprime(M);
            M[0][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][1]=='X' && M[1][1]=='X' && M[2][1]==' '){ /* segunda coluna*/
            clean();
            imprime(M);
            M[2][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[1][1]=='X' && M[2][1]=='X' && M[0][1]==' '){
            clean();
            imprime(M);
            M[0][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[0][1]=='X' && M[2][1]=='X' && M[1][1]==' '){
            clean();
            imprime(M);
            M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else if( M[0][2]=='X' && M[1][2]=='X' && M[2][2]==' '){ /*terceira coluna*/
            clean();
            imprime(M);
            M[2][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else if( M[0][2]=='X' && M[2][2]=='X' && M[1][2]==' '){ 
            clean();
            imprime(M);
            M[1][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
         else if( M[2][2]=='X' && M[1][2]=='X' && M[0][2]==' '){
            clean();
            imprime(M);
            M[0][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else if(M[1][1]==' '){
            clean();
            imprime(M);
            M[1][1]='O';
            pauses(1000000);
            clean();
            imprime(M);

        }

        else if(M[2][2]==' '){
            clean();
            imprime(M);
            M[2][2]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }

        else if(M[0][0]==' '){
            clean();
            imprime(M);
            M[0][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }

        else if(M[1][0]==' '){
            clean();
            imprime(M);
            M[1][0]='O';
            pauses(1000000);
            clean();
            imprime(M);
        }
        else{
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(M[i][j]==' '){
                        M[i][j]='O';
                        j=3;
                        i=3;
                    }
                     
                }
            }
            pauses(1000000);
            clean();
            imprime(M);
        }
}

