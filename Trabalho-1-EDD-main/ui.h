#ifndef UI_H
#define UI_H

// Importa interfaces públicas
#include "bd_times.h"
#include "bd_partidas.h"

int imprimir_menu(BDTime *bd_t, BDPartidas *bd_p);

void consultar_time(BDTime *bd_t, BDPartidas *bd_p);

void consultar_partidas(BDTime *bd_t, BDPartidas *bd_p);

void imprimir_tabela_classificacao();

#endif