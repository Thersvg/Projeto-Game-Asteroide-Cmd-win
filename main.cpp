#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funcoes.h"
#include <time.h>
#include <locale.h>

using namespace std;

void XYGOO(int x, int y){
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y -1});
}

int main(){

    char OpIniciarOUsair,OpEscolhaDeNiveis, OpIniciarLoopDoJogoOuSair;
    string NomeDoJogador;
    string FacilDificilImpossivel;
    int PontosNecessarios;
    int velocidadedojogo;
    int verificadorDeNiveis = 1;
    int num, num2, num3, num4;

    setlocale(LC_ALL, "Portuguese");

            XYGOO(28,10);
            PedindoNomeDoUser();
            XYGOO(36,12);
            cin>>NomeDoJogador;
            clrscr();

            InstrucoesParaOjogador();
            XYGOO(1,24);
            system("pause");
            clrscr();

    while (true) {

            placa.vida = 10; // para o jogor voltar a rodar
            placa.pontos = 0;
            placa.tempo = 0;
            velocidadedojogo = 0;
            Meteorito2.by = 1;
            Meteorito.b = 1;

            if(verificadorDeNiveis == 1){
                placa.tempo = 1200;
                PontosNecessarios = 20;
                velocidadedojogo = 35;
                FacilDificilImpossivel = "F�cil";
            }else if(verificadorDeNiveis == 2){
                placa.tempo = 1800;
                PontosNecessarios = 40;
                velocidadedojogo = 30;
                FacilDificilImpossivel = "F�cil";
            } else if(verificadorDeNiveis == 3){
                placa.tempo = 2400;
                PontosNecessarios = 80;
                velocidadedojogo = 25;
                FacilDificilImpossivel = "M�dio";
            } else if(verificadorDeNiveis == 4){
                placa.tempo = 3600;
                PontosNecessarios = 100;
                velocidadedojogo = 20;
                FacilDificilImpossivel = "M�dio";
            } else if(verificadorDeNiveis == 5){
                placa.tempo = 4200;
                PontosNecessarios = 120;
                velocidadedojogo = 18;
                FacilDificilImpossivel = "Dif�cil";
            } else if(verificadorDeNiveis == 6){
                placa.tempo = 4100;
                PontosNecessarios = 150;
                velocidadedojogo = 16;
                FacilDificilImpossivel = "Hardcore";
            }else if(verificadorDeNiveis > 5){
                    clrscr();
                    AvisoFimDeJogo();
                    XYGOO(1,23);
                    system("pause");
                    break;
            }

            CONSOLE_CURSOR_INFO cursor = {1, FALSE};  //esconder o cursor
            SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

            creditos();
            AsteroideDesenho();
            OpcaoIniciarSair();
            XYGOO(41,18);
            cin>> OpIniciarOUsair;


            if(OpIniciarOUsair == 'i'){
                clrscr();
                // LOOP DA PARTIDA
                while(true){
                    clrscr();

                    CONSOLE_CURSOR_INFO cursor = {1, FALSE}; // esconder o cursor
                        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

                    HudVidaPontosTempo();
                        NaveEspacial();

                            XYGOO(9,2);
                            cout<<NomeDoJogador;
                            XYGOO(11,3);
                            cout<<PontosNecessarios;
                            XYGOO(9,4);
                            cout<<verificadorDeNiveis<<" "<<FacilDificilImpossivel;
                            InforNomeEpontos();

                                BarraDeVidaDesenho();
                                MeteoroDesenho();
                                MeteoroDesenho2();
                                BonusJogoDesenho3();
                                MenosPontosJogoDesenho4();

                        if(kbhit()){
                            int tecla = getch();

                            if(tecla == 100){
                                Mercury.x = Mercury.x + Mercury.passodanave;
                                Mercury.xc = Mercury.xc + Mercury.passodanave;

                                if(Mercury.x >= 79){
                                    Mercury.x = 78;
                                    Mercury.xc = 78;
                                }

                            }else if(tecla == 97){
                                Mercury.x = Mercury.x - Mercury.passodanave;
                                Mercury.xc = Mercury.xc - Mercury.passodanave;

                                if(Mercury.x <= 1){
                                    Mercury.x = 2;
                                    Mercury.xc = 2;
                                }
                            }

                            if(tecla == 105){ // info
                            clrscr();
                            InstrucoesParaOjogador();
                            XYGOO(1,24);
                            system("pause");
                            }

                            if(tecla == 112){
                                XYGOO(1,8);
                                cout<<"Posi��oB: Meteoro1:"<<" "<<Meteorito.b;
                                XYGOO(1,9);
                                cout<<"Posi��oB: Meteoro2:"<<" "<<Meteorito2.by;
                                XYGOO(1,10);
                                cout<<"Posi��oB: Meteoro3:"<<" "<<MeteoritoEspecial.ny;
                                XYGOO(1,11);
                                cout<<"Posi��oB: Meteoro4:"<<" "<<MeteoritoMalicioso.py;
                                XYGOO(1,12);
                                cout<<"Posi��oA: Meteoro1:"<<" "<<num;
                                XYGOO(1,13);
                                cout<<"Posi��oA: Meteoro2:"<<" "<<num2;
                                XYGOO(1,14);
                                cout<<"Posi��oA: Meteoro3:"<<" "<<num3;
                                XYGOO(1,15);
                                cout<<"Posi��oA: Meteoro4:"<<" "<<num4;
                                XYGOO(1,16);
                                cout<<"Posi��oNave x :"<<" "<<Mercury.x<<" "<<"Posi��oNave y :"<<" "<<Mercury.y;
                                XYGOO(1,17);
                                cout<<"Posi��oNave xc :"<<" "<<Mercury.xc<<" "<<"Posi��oNave yc :"<<" "<<Mercury.yc;
                            }

                            if(tecla == 116){
                                clrscr();
                                dicasDosAsteroides();
                                XYGOO(1,23);
                                system("pause");
                            }

                        }

                        Meteorito.b = Meteorito.b + Meteorito.passo;
                            if(Meteorito.b == 24 || (Mercury.x == Meteorito.a && Mercury.y == Meteorito.b) || (Mercury.x + 2  == Meteorito.a && Mercury.y  == Meteorito.b) || (Mercury.xc + 1 == Meteorito.a && Mercury.yc == Meteorito.b)){

                                srand(time(NULL));
                                num = ((rand() % 40) * 2) + 10;

                                Meteorito.b = 1;
                                Meteorito.a = num;

                                if(Meteorito.a >= 79){
                                    Meteorito.a = 2;
                                }
                            }

                        Meteorito2.by = Meteorito2.by + Meteorito2.passometeoro2;
                            if(Meteorito2.by == 24 || (Mercury.x == Meteorito2.ax && Mercury.y == Meteorito2.by) || (Mercury.x + 2  == Meteorito2.ax && Mercury.y  == Meteorito2.by) || (Mercury.xc + 1 == Meteorito2.ax && Mercury.yc == Meteorito2.by)){

                                srand(time(NULL));
                                num2 = ((rand() % 40) * 2) + 15;


                                Meteorito2.by = 1;
                                Meteorito2.ax = num2;

                                if(Meteorito2.ax >= 79){
                                    Meteorito2.ax = 2;
                                }
                            }

                        MeteoritoEspecial.ny = MeteoritoEspecial.ny + MeteoritoEspecial.passometeoro3;
                            if(MeteoritoEspecial.ny == 24 || (Mercury.x == MeteoritoEspecial.mx && Mercury.y == MeteoritoEspecial.ny) || (Mercury.x + 2  == MeteoritoEspecial.mx && Mercury.y  == MeteoritoEspecial.ny) || (Mercury.xc + 1 == MeteoritoEspecial.mx && Mercury.yc == MeteoritoEspecial.ny)){

                                srand(time(NULL));
                                num3 = ((rand() % 40) * 2) + 20;


                                MeteoritoEspecial.ny = 1;
                                MeteoritoEspecial.mx = num3;

                                if(MeteoritoEspecial.mx >= 79){
                                    MeteoritoEspecial.mx = 2;
                                }
                            }

                        MeteoritoMalicioso.py = MeteoritoMalicioso.py + MeteoritoMalicioso.passometeoro4;
                            if(MeteoritoMalicioso.py == 24 || (Mercury.x == MeteoritoMalicioso.px && Mercury.y == MeteoritoMalicioso.py) || (Mercury.x + 2  == MeteoritoMalicioso.px && Mercury.y  == MeteoritoMalicioso.py) || (Mercury.xc + 1 == MeteoritoMalicioso.px && Mercury.yc == MeteoritoMalicioso.py)){

                                srand(time(NULL));
                                num4 = ((rand() % 40) * 2) + 25;


                                MeteoritoMalicioso.py  = 1;
                                MeteoritoMalicioso.px = num4;

                                if(MeteoritoMalicioso.px >= 79){
                                    MeteoritoMalicioso.px = 2;
                                }
                            }

                        placa.pontos = ContadorDePontos(placa.pontos);
                        placa.vida = ContadorDeVidas(placa.vida);
                        placa.tempo = ContadorDoTempo(placa.tempo);


                                if(placa.vida == 0 || placa.tempo == 0 || placa.vida < 0 ||  placa.tempo < 0){
                                    clrscr();
                                    HudVidaPontosTempo();

                                    verificadorDeNiveis = verificadorDeNiveis;

                                    XYGOO(9,2);
                                    cout<<NomeDoJogador;
                                    XYGOO(11,3);
                                    cout<<PontosNecessarios;
                                    XYGOO(9,4);
                                    cout<<verificadorDeNiveis;
                                    XYGOO(11,4);
                                    cout<<FacilDificilImpossivel;
                                    InforNomeEpontos();

                                    VocePerdeuDesenho();
                                    XYGOO(1,22);
                                    system("pause");

                                    clrscr();
                                    break;

                                }else if(placa.pontos == PontosNecessarios || placa.pontos > PontosNecessarios){
                                    clrscr();
                                    HudVidaPontosTempo();

                                    verificadorDeNiveis++;

                                    XYGOO(9,2);
                                    cout<<NomeDoJogador;
                                    XYGOO(11,3);
                                    cout<<PontosNecessarios;
                                    XYGOO(9,4);
                                    cout<<verificadorDeNiveis;
                                    XYGOO(11,4);
                                    cout<<FacilDificilImpossivel;
                                    InforNomeEpontos();

                                    VoceGanhouDesenho();
                                    XYGOO(1,22);
                                    system("pause");

                                    clrscr();
                                    break;

                                }
                        Sleep(velocidadedojogo);

                } // fim while da partida

            }else if(OpIniciarOUsair == 's'){
                 return 0;
            }else if(OpIniciarOUsair == 'c'){
                clrscr();
                DentroDoscreditos();
                XYGOO(1,24);
                system("pause");
                clrscr();
            }else{
                return 0;
            }

    } // fim while geral

    return 0;
}
