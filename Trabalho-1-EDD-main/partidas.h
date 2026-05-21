#ifndef PARTIDAS_H
#define PARTIDAS_H

// Importa uma interface pública
#include "bd_times.h"

typedef struct {
    int id;           
    int id_time1;     
    int id_time2;     
    int gols_time1;   
    int gols_time2;   
} Partidas;

// Remove , ao ler algum dos arquivos de partidas
Partidas analisa_partidas(char *linha_csv);

// Imprime as partidas presentes no banco de dados
void imprimir_partidas(Partidas p, BDTime *bd_times);

#endif