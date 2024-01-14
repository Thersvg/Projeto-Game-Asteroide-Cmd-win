#include <iostream>
#include "funcoes.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void XYGO(int x, int y){
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y -1});
}

nave Mercury;
meteoro Meteorito;
meteoro2 Meteorito2;
meteoro3 MeteoritoEspecial;
meteoro4 MeteoritoMalicioso;

hud placa;

void AsteroideDesenho(){
    cout<<"                  _____ _______ ______ _____   ____ _____ _____  ______ "<<endl;
	cout<<"           /\\    / ____|__   __|  ____|  __ \\ / __ \\_   _|  __ \\|  ____|"<<endl;
	cout<<"          /  \\  | (___    | |  | |__  | |__) | |  | || | | |  | | |__   "<<endl;
	cout<<"         / /\\ \\  \\___ \\   | |  |  __| |  _  /| |  | || | | |  | |  __|  "<<endl;
	cout<<"        / ____ \\ ____) |  | |  | |____| | \\ \\| |__| || |_| |__| | |____ "<<endl;
	cout<<"       /_/    \\_\\_____/   |_|  |______|_|  \\_\\\\____/_____|_____/|______|"<<endl;
	cout<<"                           										                                     Beta 1.0"<<endl;
}

void VocePerdeuDesenho(){
    XYGO(2,10);
    cout<<" __      ______   _____ ______   _____  ______ _____  _____  ______ _    _ "<<endl;
    XYGO(2,11);
    cout<<" \\ \\    / / __ \\ / ____|  ____| |  __ \\|  ____|  __ \\|  __ \\|  ____| |  | |"<<endl;
    XYGO(2,12);
    cout<<"  \\ \\  / / |  | | |    | |__    | |__) | |__  | |__) | |  | | |__  | |  | |"<<endl;
    XYGO(2,13);
    cout<<"   \\ \\/ /| |  | | |    |  __|   |  ___/|  __| |  _  /| |  | |  __| | |  | |"<<endl;
    XYGO(2,14);
    cout<<"    \\  / | |__| | |____| |____  | |    | |____| | \\ \\| |__| | |____| |__| |"<<endl;
    XYGO(2,15);
    cout<<"     \\/   \\____/ \\_____|______| |_|    |______|_|  \\_\\_____/|______|\\____/ "<<endl;

}

void VoceGanhouDesenho(){
    XYGO(2,10);
    cout<<" __      ______   _____ ______    _____          _   _ _    _  ____  _    _ "<<endl;
    XYGO(2,11);
    cout<<" \\ \\    / / __ \\ / ____|  ____|  / ____|   /\\   | \\ | | |  | |/ __ \\| |  | |"<<endl;
    XYGO(2,12);
    cout<<"  \\ \\  / / |  | | |    | |__    | |  __   /  \\  |  \\| | |__| | |  | | |  | |"<<endl;
    XYGO(2,13);
    cout<<"   \\ \\/ /| |  | | |    |  __|   | | |_ | / /\\ \\ | . ` |  __  | |  | | |  | |"<<endl;
    XYGO(2,14);
    cout<<"    \\  / | |__| | |____| |____  | |__| |/ ____ \\| |\\  | |  | | |__| | |__| |"<<endl;
    XYGO(2,15);
    cout<<"     \\/   \\____/ \\_____|______|  \\_____/_/    \\_\\_| \\_|_|  |_|\\____/ \\____/ "<<endl;

}

void InstrucoesParaOjogador(){
    XYGO(31,1);
    cout<<"LEIA AS INSTRUC�ES!"<<endl;
    XYGO(15,3);
    cout<<"USE APENAS AS TECLAS [A] E [D] PARA MOVIMENTAR A NAVE."<<endl;
    XYGO(4,5);
    cout<<"VOC� TER� UM TEMPO PARA IMPEDIR QUE OS METEOROS COLIDAM COM A BARRA DE VIDA."<<endl;
    XYGO(7,7);
    cout<<"VOC� TEM 10 VIDAS, COM RECARGA AUTOM�TICA DE +2, QUANDO PEGAR PONTOS."<<endl;
    XYGO(24,9);
    cout<<"SUA VIDA DIMINUI, SEU TEMPO DIMINUI."<<endl;
    XYGO(4,11);
    cout<<"OBTENHA OS PONTOS NECESS�RIOS PARA PASSAR DE FASE, E N�O PERCA SEU TEMPO!."<<endl;

    XYGO(2,15);
    cout<<" ^"<<endl;
    XYGO(2,16);
    cout<<"/_\\"<<endl;
    XYGO(3,17);
    cout<<"()"<<endl;
    XYGO(2,17);
    cout<<"()"<<endl;

    XYGO(6,15);
    cout<<"Nome da Nave: MERCURY."<<endl;

    XYGO(40,15);
    cout<<"O Seu Nome: Meteorito"<<endl;
    XYGO(40,16);
    cout<<"+ Seu Nome: Aspiridix"<<endl;
    XYGO(40,17);
    cout<<"* Seu Nome: Malicious-4P"<<endl;
}

void dicasDosAsteroides(){

    XYGO(1,2);
    cout<<" -> O :ESSE OFERECE +1 PONTO AO SER DESTRU�DO E CAUSA DANO NA VIDA DE -1."<<endl;
    XYGO(1,3);
    cout<<" -> + :ESSE OFERECE +2 PONTOS AO SER DESTRU�DO E N�O CAUSA DANOS NA VIDA."<<endl;
    XYGO(1,4);
    cout<<" -> * :ESSE OFERECE -10 PONTOS AO SER DESTRU�DO E N�O CAUSA DANOS NA VIDA."<<endl;
}

void creditos(){
    XYGO(2,0);
    cout<<"[C] CR�DITOS"<<endl;
}

void DentroDoscreditos(){

    XYGO(25,11);
    cout<<"CRIADOR: RODRIGO ALMEIDA."<<endl;
    //XYGO(25,12);
    //cout<<"CRIADORA: EMILLY VITORIA."<<endl;
    XYGO(25,13);
    cout<<"PROFESSOR: BERNARDO BIESSECK."<<endl;
    XYGO(29,18);
    cout<<"IFMT - PONTES E LACERDA"<<endl;
}

void OpcaoIniciarSair(){
    XYGO(33,12);
    cout<<"ESCOLHA UMA OPC�O"<<endl;
    XYGO(36,14);
    cout<<"[i] INICIAR"<<endl;
    XYGO(37,16);
    cout<<"[s] SAIR"<<endl;
}

void MeteoroDesenho(){
    XYGO((int) Meteorito.a, (int) Meteorito.b);
    cout<<"O"<<endl;
}

void MeteoroDesenho2(){
    XYGO((int) Meteorito2.ax, (int) Meteorito2.by);
    cout<<"O"<<endl;
}

void BonusJogoDesenho3(){
    XYGO((int) MeteoritoEspecial.mx, (int) MeteoritoEspecial.ny);
    cout<<"+"<<endl;
}

void MenosPontosJogoDesenho4(){
    XYGO((int) MeteoritoMalicioso.px, (int) MeteoritoMalicioso.py);
    cout<<"*"<<endl;
}

void NaveEspacial(){
    XYGO((int)Mercury.xc, (int) Mercury.yc);
    cout<<" ^"<<endl;
    XYGO((int)Mercury.x, (int) Mercury.y);
    cout<<"/_\\"<<endl;
}

void BarraDeVidaDesenho(){
    XYGO(1,24);
    cout<<"==============================================================================="<<endl;
}

void PedindoNomeDoUser(){
    cout<<"DIGITE SEU PRIMEIRO NOME!"<<endl;
}

void HudVidaPontosTempo(){
    XYGO(68,2);
    cout<<"Vida:"<<"   "<<placa.vida<<endl;
    XYGO(68,3);
    cout<<"Pontos:"<<" "<<placa.pontos<<endl;
    XYGO(68,4);
    cout<<"Tempo:"<<"  "<<placa.tempo<<endl;
}

void InforNomeEpontos(){
    XYGO(1,2);
    cout<<"Player:"<<endl;
    XYGO(1,3);
    cout<<"Obter:"<<endl;
    XYGO(1,4);
    cout<<"N�vel:"<<endl;
    XYGO(1,6);
    cout<<"Info = (i)"<<endl;
    XYGO(68,6);
    cout<<"Dicas = (t)"<<endl;
}

void AvisoFimDeJogo(){
    XYGO(23,12);
    cout<<"PARAB�NS! VOC� COMPLETOU TODAS AS FASES."<<endl;
}

int ContadorDePontos(int CDP){
    if(Mercury.x  == Meteorito.a && Mercury.y - 2  == Meteorito.b || Mercury.xc + 1 == Meteorito.a   && Mercury.yc -1  == Meteorito.b  || Mercury.xc + 2 == Meteorito.a && Mercury.yc   == Meteorito.b){
        CDP++;
    }
    if(Mercury.x  == Meteorito2.ax && Mercury.y - 2  == Meteorito2.by || Mercury.xc + 1 == Meteorito2.ax   && Mercury.yc -1 == Meteorito2.by  || Mercury.xc + 2 == Meteorito2.ax && Mercury.yc   == Meteorito2.by){
        CDP++;
    }
    if(Mercury.x  == MeteoritoEspecial.mx && Mercury.y - 2  == MeteoritoEspecial.ny || Mercury.xc + 1 == MeteoritoEspecial.mx  && Mercury.yc -1 == MeteoritoEspecial.ny || Mercury.xc + 2 == MeteoritoEspecial.mx && Mercury.yc   == MeteoritoEspecial.ny){
        CDP = CDP + 2;
    }

    if(Mercury.x  == MeteoritoMalicioso.px && Mercury.y - 2  == MeteoritoMalicioso.py || Mercury.xc + 1 == MeteoritoMalicioso.px  && Mercury.yc -1 == MeteoritoMalicioso.py || Mercury.xc + 2 == MeteoritoMalicioso.px && Mercury.yc   == MeteoritoMalicioso.py){
        CDP = CDP - 10;
    }
    if(CDP < 0){
        CDP = 0;
    }
    return CDP;
}

int ContadorDeVidas(int CDV){
   if(Meteorito.b == 23 || Meteorito2.by == 23){
        placa.vida--;
   }
   if(Mercury.x  == Meteorito.a && Mercury.y - 2  == Meteorito.b || Mercury.xc + 1 == Meteorito.a   && Mercury.yc -1  == Meteorito.b  || Mercury.xc + 2 == Meteorito.a && Mercury.yc   == Meteorito.b){
        placa.vida = placa.vida + 2;
   }

   if(Mercury.x  == Meteorito2.ax && Mercury.y - 2  == Meteorito2.by || Mercury.xc + 1 == Meteorito2.ax   && Mercury.yc -1  == Meteorito2.by  || Mercury.xc + 2 == Meteorito2.ax && Mercury.yc   == Meteorito2.by){
        placa.vida = placa.vida + 2;
   }
    return placa.vida;
}

int ContadorDoTempo(int CDT){
    placa.tempo--;
}
