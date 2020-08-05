/*Biblioteca desenvolvida para uso nos trabalhos da disciplina de AlgI
Autor: Anderson Pereira das Neves
Funções para Linux.
Versão 1.0
*/
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/ioctl.h>
#include <termios.h>

void posxy(int x,int y); /*posiciona o cursor no terminal x coluna y linha*/
void clean();/*limpa o terminal */
void cursor(int i);/*Habilita(1) e desabilita(0) o cursor na tela  */
void pauses (int i);/*pausa o programa por i milissegundos*/
int getcs(void);/*verifica e lê  se exite algo para ser lido */
void tela(int *row ,int *col);/*retorna o tamanho da tela nas variáveis*/
void color(int i ,int j);/*muda a cor do fundo e da letra  cores de 0 a 7*/