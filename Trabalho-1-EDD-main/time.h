#ifndef TIME_H
#define TIME_H

/*
 * TAD Time
 * Representa os dados de um time no sistema.
 */

typedef struct {
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_m;
    int gols_s;
    int pontos_ganhos;
    int saldo_gols;
} Time;

void calcula_ponto_ganho(Time *t);

void calcula_saldo_gols(Time *t);

Time analisa_time(char *linha_csv);

void imprimir_time(Time t);

#endif