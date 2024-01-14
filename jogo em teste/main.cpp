#include <iostream>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void banner(){ // menu inicial
	textcolor(10);
	cout<<"                  _____ _______ ______ _____   ____ _____ _____  ______ "<<endl;	
	cout<<"           /\\    / ____|__   __|  ____|  __ \\ / __ \\_   _|  __ \\|  ____|"<<endl;
	cout<<"          /  \\  | (___    | |  | |__  | |__) | |  | || | | |  | | |__   "<<endl;
	cout<<"         / /\\ \\  \\___ \\   | |  |  __| |  _  /| |  | || | | |  | |  __|  "<<endl;
	cout<<"        / ____ \\ ____) |  | |  | |____| | \\ \\| |__| || |_| |__| | |____ "<<endl;
	cout<<"       /_/    \\_\\_____/   |_|  |______|_|  \\_\\\\____/_____|_____/|______|"<<endl;
	cout<<"                           										            "<<endl;
	textbackground(5);
}
	
void perdeu(){ // função para exibir se o jogador perdeu
	cout<<"VOCÊ PERDEU"<<endl;
	gotoxy(53,24);
	cout<<"CRIADORES:RODRIGO & EMILLY"<<endl;		
}


void ganhou(){ // função para exibir se o jogador ganhou
	cout<<"VOCÊ GANHOU"<<endl;
	gotoxy(53,24);
	cout<<"CRIADORES:RODRIGO & EMILLY"<<endl;	
}


void instrucao(){ // menu com as instruções
	clrscr();
	gotoxy(28,2);
	cout<<"ATENCÃO LEIA AS INSTRUCÕES!"<<endl;
	gotoxy(17,8);
	cout<<"USE AS TECLAS [A] e [D] PARA MOVIMENTAR A NAVE"<<endl;
	gotoxy(18,10);
	cout<<"VOCE TERÁ UM TEMPO PARA IMPEDIR OS METEOROS"<<endl;
	gotoxy(9,12);
	cout<<"TERÁ 5 VIDAS, COM RECARGA AUTOMÁTICA DE +2 QUANDO GANHAR PONTOS"<<endl;
	gotoxy(20,14);
	cout<<"SUA VIDA DIMINUI, SEU TEMPO DIMINUI"<<endl;
	gotoxy(13,16);
	cout<<"OBTENHA OS PONTOS PARA GANHAR, E NÃO PERCA SEU TEMPO!."<<endl;
	gotoxy(40,24);
	cout<<endl;		
}


string inicio(string nome){	 //  tela inicial pedindo o nome
	cout<<"DIGITE SEU PRIMEIRO NOME!"<<endl;
	cin>>nome;
	return nome;	
}

int level(int nivel){	 //  tela inicial pedindo o nome
	cout<<"ESCOLHA UM NIVEL"<<endl;
	cout<<endl;
	cout<<"[1]NÍVEL  (20Pts)  600"<<endl;
	cout<<"[2]NÍVEL  (40Pts)  1200"<<endl;
	cout<<"[3]NÍVEL  (60Pts)  1800"<<endl;
	cout<<"[4]NÍVEL  (80Pts)  2400"<<endl;
	cout<<"[5]NÍVEL  (100Pts) 3000"<<endl;
	cin>>nivel;
	return nivel;	
}
int placarpontos(int pontos){ // função para aumentar os pontos
			pontos = pontos +1;						
		return pontos;	
}
int placarvidas(int vidas){ // função para aumentar a vida
			vidas = vidas +2;						
		return vidas;	
}

// ---------------------------------------------------------//

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int x = 40, y = 23; // localização da nave
	int z = 40, r = 22; // localização do parte de cima da nave
	int m = 4, t = 1; // localização do meteoro				
	int tecla = 0;
	char op;
	int pontos = 0;
	int vidas = 10;
	int tempo = 600;
	string nome;
	int nivel;
	int requerido;

		
	string nomeplacar = inicio(nome); // chamando função do nome
	clrscr();
	
	int nivelplacar = level(nivel); // chamando função dos niveis
	clrscr();
	
	if(nivelplacar == 1){ // alteraçõs nas pontuações dos niveis
		requerido = 20;
	}else if(nivelplacar == 2){
		requerido = 40;
		tempo = 1200;
	}else if(nivelplacar == 3){
		requerido = 60;
		tempo = 1800;
	}else if(nivelplacar == 4){
		requerido = 80;
		tempo = 2400;
	}else if(nivelplacar == 5){
		requerido = 100;
		tempo = 3000;
	}else{
		return 0;
	}

	_setcursortype(_NOCURSOR); // esconder o cursor		
	banner(); // tela inicial do jogo que tem o nome
	
	gotoxy(30,12);
	cout<<"ESCOLHA UMA OPCÃO"<<endl; //opções do menu
	gotoxy(33,14);
	cout<<"[I] INICIAR"<<endl;
	gotoxy(34,16);
	cout<<"[S] SAIR"<<endl;
	gotoxy(37,19);
	cin>>op;
		
	if(op == 'i' || op == 'I'){ // função para as opções do inicio do jogo
	
	textbackground(0); // mudar de cor o fundo para preto	
	instrucao(); // menu das instruções
	
	system("pause");
	
	while(true){	
	clrscr(); // limpa tela
	
	srand(time(NULL)); // gerar numeros aleatorios
    int num = (rand() % 40)*2;
    
    if(num > 70){
    	m = 1;
	}
    
	_setcursortype(_NOCURSOR); // esconder o cursor	
			 
	gotoxy(37,2); // Hud do placar
	cout<<nomeplacar<<endl;
	gotoxy(69,2); 
	cout<<"Pontos:"<<" "<<pontos<<endl;
	gotoxy(69,3);	
	cout<<"Vidas:"<<" "<<vidas<<endl;
	gotoxy(69,4);
	cout<<"Tempo:"<<" "<<tempo<<endl;
	gotoxy(34,3);
	cout<<"Obter:"<<" "<<requerido<<" "<<"Pts"<<endl;
	gotoxy(1,2);
	cout<<num;
	
	
	tempo--; // fazer tempo diminuir 			
			 												
	gotoxy(z,r); // parte de cima da nave
	cout<<"  |"<<endl;
	gotoxy(x,y); // A nave
	cout<<"´-o-`"<<endl;		
	gotoxy (m,t); //meteoro
	cout<<"(O)"<<endl;	
	gotoxy(1,25); // barra de vida	
	cout<<"================================================================================"<<endl;
																				
			if (kbhit() == true) {  // quando eu apertar os botoes
			tecla = getch(); 						
				if(tecla == 100){ //funções do botao direito
					x = x + 1;
					z = z + 1;											
						if( x >= 80){
						x = 79;
						z = 79;						
						}						
				}else if(tecla == 97){ //funções do botao esquerdo
						x = x - 1;
						z = z - 1;									
						if( x <= 1){
							x = 2;
							z = 2;						
						}	
				}																																																																						
			}							
						t = t + 1; // meteoro cair																		
								if( t == 24){ // meteoro voltar (cima)
									t = 2;
									m = num;									
									vidas = vidas -1;
																																																																																																																												
										if(m >= 80){ //fazer o meteoro sempre voltar e continuar (lados)
											m = 1;
										}else if(m <= 1){
											m = 80;
										}
								}
								
											if (vidas < 5){ // trocar de cor o texto quando a vida ou o tempo estiver baixo
													textcolor(7);// mudar de cor  cinza
											}else{
													textcolor(10);// mudar de cor verde
											}
											
													if(tempo < 100){
														textcolor(7);// mudar de cor  cinza
													}
								
																																	
														if( x + y == m + t ){ // para aumentar os pontos e a vida
																vidas = placarvidas(vidas);											
																pontos = placarpontos(pontos);																																																				
														}															
																																																									
														if(vidas == 0 || tempo == 0){ //exibir o fim do jogo
															textcolor(4);// mudar de cor vermelho																
															clrscr();
															
															gotoxy(37, 13);
															cout<<nomeplacar<<endl;																		
															gotoxy(35, 12);							
															perdeu();
																								
															gotoxy(37,2); // Hud do placar
															cout<<nomeplacar<<endl;
															gotoxy(69,2); 
															cout<<"Pontos:"<<" "<<pontos<<endl;
															gotoxy(69,3);	
															cout<<"Vidas:"<<" "<<vidas<<endl;
															gotoxy(69,4);
															cout<<"Tempo:"<<" "<<tempo<<endl;
															gotoxy(34,3);
															cout<<"Obter:"<<" "<<requerido<<" "<<"Pts"<<endl;
															gotoxy(1,2);
															cout<<num;															
															gotoxy(1,24);																														
															system("pause");																																												
															
															return 0;				
																										
														}else if(pontos >= requerido){	
															textcolor(10);// mudar de cor verde																																									
															clrscr();
																
															gotoxy(37, 13);
															cout<<nomeplacar<<endl;									
															gotoxy(35, 12);
															ganhou();
																									
															gotoxy(37,2); // Hud do placar
															cout<<nomeplacar<<endl;
															gotoxy(69,2); 
															cout<<"Pontos:"<<" "<<pontos<<endl;
															gotoxy(69,3);	
															cout<<"Vidas:"<<" "<<vidas<<endl;
															gotoxy(69,4);
															cout<<"Tempo:"<<" "<<tempo<<endl;
															gotoxy(34,3);
															cout<<"Obter:"<<" "<<requerido<<" "<<"Pts"<<endl;
															gotoxy(1,2);
															cout<<num;
																								
															gotoxy(1,24);									
															system("pause");																																	
														}																																																													
	Sleep(20);
								
   }
   }
			if(op != 'p'){ // funções para a saida do jogo
			return 0;
	
			}else if(op == 's' || op == 'S'){
			return 0;
			}
						
	return 0;
}
