#ifndef UI_H
#define UI_H

#include "bd_times.h"
#include "bd_partidas.h"

int print_menu(BDTime *bd);

void consultar_time(BDTime *bd);

int consultar_partidas();

int imprimir_tabela();

#endif