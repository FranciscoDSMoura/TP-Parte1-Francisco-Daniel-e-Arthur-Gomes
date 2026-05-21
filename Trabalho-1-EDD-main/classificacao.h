#ifndef CLASSIFICACAO_H
#define CLASSIFICACAO_H

// Importa interfaces públicas
#include "time.h"
#include "bd_times.h"
#include "bd_partidas.h"
#include "partidas.h"

// Calcula a pontuação de um time após todas as partidas
void calcula_pontuacoes_time(Time *t, Partidas p);

void classificacao_completa(BDTime *bd_t, BDPartidas *bd_p);

#endif