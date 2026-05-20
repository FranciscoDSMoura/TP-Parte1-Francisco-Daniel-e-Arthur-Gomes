#include <stdio.h>
#include "ui.h"
#include "bd_partidas.h"
#include "bd_times.h"

int main()
{
    // const char *arquivo_p = "partidas_vazio.csv";
    const char *arquivo_t = "times.csv";

    BDTime *bd_t = criar_bd_time();
    // BDPartidas *bd_p = criar_partidas();

    bd_carregar_times_csv(bd_t, arquivo_t);
    
    print_menu(bd_t);

    destruir_bd_time(bd_t);
    
    return 0;
}

