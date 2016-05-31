//Meu primeiro código em C++ 
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;
	
	while (sair == false)
	{

		cout << " o                    o" << endl;
		cout << ".T./                \\.T." << endl;
		cout << " ^                    ^" << endl;
		cout << jog1 << "                " << jog2 << endl;
		cout << "Vida: " << vida1 << "           " << "Vida: " << vida2 << endl;
		system("pause");

		int dado6;

		// Adiciona uma "semente" ao gerador de números
		srand((int)time(0));

		// Gera um número aleatório entre 1 a 6
		dado6 = rand() % 6 + 1;
		// Causa dano igual o valor gerado no "dado"
		vida1 = vida1 - dado6;

		// Gera um número aleatório entre 1 a 6
		dado6 = rand() % 6 + 1;
		// Causa dano igual o valor gerado no "dado"
		vida2 = vida2 - dado6;


    //Se sair não limpa a tela
    if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	//Se continuar então limpa a tela
	else system("cls");
	}
	
	  cout << "Fim de jogo!" << endl;

	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl; 
	else cout << "Os dois perderam!" << endl;
	return 0;
}
