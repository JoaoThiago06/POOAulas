//Meu primeiro código em C++ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string jog1, jog2;
	int vida1 = 100, vida2 = 100;

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	cout << " o                    o" << endl;
	cout << ".T./                \\.T." << endl;
	cout << " ^                    ^" << endl;
	cout << jog1 << "                " << jog2 << endl;
	cout << "Vida: " << vida1 << "           " << "Vida: " << vida2 << endl;

	int dado6;

	// Adiciona uma "semente" ao gerador de números
	srand(1234);

	// Gera um número aleatório entre 1 a 100
	dado6 = rand() % 100 + 1;
	// Causa dano igual o valor gerado no "dado"
	vida1 = vida1 - dado6;

	// Gera um número aleatório entre 1 a 100
	dado6 = rand() % 100 + 1;
	// Causa dano igual o valor gerado no "dado"
	vida2 = vida2 - dado6;

	cout << "Vida: " << vida1 << "      " << "Vida: " << vida2 << endl;

	return 0;

}
