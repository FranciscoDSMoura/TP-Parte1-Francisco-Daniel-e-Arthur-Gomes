#include "classificacao.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Importa interfaces públicas
#include "bd_times.h"
#include "bd_partidas.h"

void calcula_pontuacoes_time(Time *t, Partidas p){
    Time pontos_time_pre_campeonato();

    // Calcula as pontuações que o time fez em casa
    if (t->id == p.id_time1){
        if(p.gols_time1 > p.gols_time2){
            t->vitorias += 1;
        } else if(p.gols_time1 < p.gols_time2){
            t->derrotas += 1;
        } else {
            t->empates += 1;
        }
        t->gols_m += p.gols_time1;
        t->gols_s += p.gols_time2;

    // Calcula as pontuações que o time fez fora de casa
    } else if (t->id == p.id_time2){
        if(p.gols_time1 < p.gols_time2){
            t->vitorias += 1;
        } else if(p.gols_time1 > p.gols_time2){
            t->derrotas += 1;
        } else {
            t->empates += 1;
        }
        t->gols_m += p.gols_time2;
        t->gols_s += p.gols_time1;
    }

    t->pontos_ganhos += t->vitorias * 3;
    t->pontos_ganhos += t->empates;
    t->saldo_gols = t->gols_m - t->gols_s; // Calcula o saldo final de gols
}

void classificacao_completa(BDTime *bd_t, BDPartidas *bd_p)
{
    NoTime *atual_time = bd_t->inicio;

    while (atual_time) {
        Time pontos_time_pre_campeonato();

        NoPartida *atual_partida = bd_p->inicio; 
        while (atual_partida) {
            calcula_pontuacoes_time(&(atual_time->time), atual_partida->partidas);
            atual_partida = atual_partida->proximo;
        }

        calcula_saldo_gols(&(atual_time->time));
        atual_time = atual_time->proximo;
    }
}



