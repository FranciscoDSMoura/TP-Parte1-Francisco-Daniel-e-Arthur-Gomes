#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "ui.h"
#include "bd_times.h"
#include "bd_partidas.h"

void consultar_time(BDTime *bd){
  printf("Digite o nome ou o prefixo do time:\n");
  char prefixo[100];
  scanf("%99s", prefixo);
  buscar_por_nome(bd, prefixo, 10);
}

int print_menu(BDTime *bd_t){
    char opcao;
    
    //continua printando o menu ate que Q ou q seja inserido
    while (opcao != 'Q' && opcao != 'q')  {

        printf("\n1 - Consultar time\n"
               "2 - Consultar partidas\n"
               "3 - Atualizar partida\n"
               "4 - Remover partida\n"
               "5 - Inserir partida\n"
               "6 - Imprimir tabela de classificação\n"
               "Q - Sair\n\n");

        scanf(" %c", &opcao); getchar(); //recebe a opção que o usuário digitar 

        switch(opcao){
            case '1': consultar_time(bd_t); break;
            case '2': /*Função*/ break;
            case '6': /*Função*/ break;
            case 'Q': case 'q': printf("Encerrando...\n"); break;
            default: printf("Essas funções não estão disponíveis\n"); break;
        }
    }
    return 0;
}


/*
                                         ,ad8PP"""""""""YY8ba,
                                      ad8P"'               `"Y8b,
                                   ,d8P"                      `Y8b,
                  ______________ ,d8P'                          `Y8b,
              ,ad8PPP"""""""""YYY888ba,                           "8b,
           ,adP""'                 `""Y8ba                         `8b,
        ,d8P"                           `"Yb,                       `8b
      ,dP"                                 `Y8a   ____               `8,
    ,dP"                                     `Y8bdP""Yb,              8I
   ,8P'                                        "Y8,  `8b              Ib
  ,8P'                                           "8b  I8              8I
 ,dP'                   ______                    `8b d8              I8
 d8'                ,ad8P"""""Yba,                 `8b8I              8I
,8I               ,dP"IP'       "Yb,                 d8'              I8
I8'              dP" ,8'          `Yb,              d8'               dI
I8              dP'  dP             d8b,          ,8P'                8'
I8             ,8I  ,8'            ,8"`Yb        d8"                 dP
I8             I8'  dP             I8  `Yb     ,8P'                 j8'
I8             I8   8I             8P   `Yb, ,d8"                  jP'
I8             I8   8I             8I    `Y8a8"                   j8'
I8,            Y8,  8I             8I    ,d8"                    jP'
`8I            `Yb, 8I             8I  ,d8"                     j8'
 Y8,             "8b8I             I8ad8"                     ,dP'
 `8b               "8I             88P'                     ,d88'
  `Yb,              Y8             Yb                     ,dP" Yb
   `Yb,             I8,            `8,                  ,dP'   `8,
    `Y8,            `8I             Yb,               ,dP'      Ib
     `Y8,            Yb,            `Yb,            ,dP'        8I
       "8b,          `8I             `Yb,         ,dP'          I8
        `Y8b,         Yb,             `Yb,     ,d88'            8I
          `Y8ba,      `8a              `Y8a,,dP"'I8             I8
            `"Y8ba,    I8,               "Y8P'   dI             f8
                ""Y8baa,8b,               `Y8a,,d8'             dP
                    `""Y88b,                `"YYP'              8'
                         "Y8,                                  dP
           Normand        `Y8,                                j8'
           Veilleux        `Y8,                              j8'
                            `Y8b,                           j8'
                              `Y8b,                       ,d8'
                                `"Yba,                  ,dP"
                                   `"Yba,            ,adP"
                                      `"Y8bbaaaaaadd8P"
                                           `"""""""'



*/
