#include "bd_partidas.h"
#include "time.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bd_partidas {
    Partida* jogos[MAX_PARTIDAS]; 
    int quantidade;               
};

int bd_partidas_carregar(BDPartidas* bdp, const char* caminho_arquivo){
    
    FILE *file = fopen(caminho_arquivo, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo %s\n", caminho_arquivo);
        return 0; //Caso o arquivo não exista retorna 0
    }
    
    //Variaveis auxiliares
    int id, time1, time2, gols1, gols2;
    char menu[100];

    if (fscanf(file, "%[^\n]\n", menu) == EOF) {
        fclose(file);
        return 1;
        //Retorna 1 caso chegue ao final do arquivo (EOF)
    }

    while (fscanf(file, "%d,%d,%d,%d,%d\n", &id, &time1, &time2, &gols1, &gols2) == 5) {
        if (bdp->quantidade >= MAX_PARTIDAS) {
            printf("Limite maximo de partidas atingido.\n");
            break;
        }
  }       
fclose(file);
return 1;
}

/*void bd_partidas_destruir(BDPartidas* bdp) {
    if (bdp != NULL) {
        for (int i = 0; i < bdp->quantidade; i++) {
            bd_partidas_destruir(bdp->jogos[i]);
        }
        free(bdp); //libera a memoria de BDP
    }
}
*/
BDPartidas* bd_partidas_criar() {
    BDPartidas* bdp = (BDPartidas*) malloc(sizeof(BDPartidas));
    if (bdp != NULL) {
        bdp->quantidade = 0;
    }
    return bdp;
}
