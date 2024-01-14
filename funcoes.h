#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

struct nave{
    int x = 33;
    int y = 22;
    int xc = 33;
    int yc = 21;
    float passodanave = 2;
};
extern nave Mercury;

struct meteoro{
    float a = 1;
    float b = 1;
    float passo = 0.5;
};
extern meteoro Meteorito;

struct meteoro2{
    float ax = 80;
    float by = 1;
    float passometeoro2 = 0.25;
};
extern meteoro2 Meteorito2;

struct meteoro3{
    float mx = 50;
    float ny = 1;
    float passometeoro3 = 0.25;
};
extern meteoro3 MeteoritoEspecial;

struct meteoro4{
    float px = 30;
    float py = 1;
    float passometeoro4 = 0.5;
};
extern meteoro4 MeteoritoMalicioso;


struct hud{
    int vida = 10;
    int tempo = 0;
    int pontos = 0;
};
extern hud placa;


void AsteroideDesenho();
void VocePerdeuDesenho();
void VoceGanhouDesenho();
void OpcaoIniciarSair();
void NaveEspacial();
void BarraDeVidaDesenho();

void MeteoroDesenho();
void MeteoroDesenho2();
void BonusJogoDesenho3();
void MenosPontosJogoDesenho4();

void PedindoNomeDoUser();
void HudVidaPontosTempo();
void InforNomeEpontos();
void InstrucoesParaOjogador();
void AvisoFimDeJogo();

void creditos();
void DentroDoscreditos();
void dicasDosAsteroides();

int ContadorDePontos(int CDP);
int ContadorDeVidas(int CDV);
int ContadorDoTempo(int CDT);

#endif // FUNCOES_H_INCLUDED
