#ifndef BD_PARTIDAS_H
#define BD_PARTIDAS_H
#include "partidas.h"

#define MAX_PARTIDAS 100

typedef struct bd_partidas BDPartidas;

BDPartidas* bd_partidas_criar();

void bd_partidas_destruir(BDPartidas* bdp);

int bd_partidas_carregar(BDPartidas* bdp, const char* caminho_arquivo);

int bd_partidas_obter_quantidade(BDPartidas* bdp);
Partida* bd_partidas_obter_por_indice(BDPartidas* bdp, int indice);

#endif
