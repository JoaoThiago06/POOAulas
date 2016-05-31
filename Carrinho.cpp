// Tema 3 - Jogo de Corrida
#include <iostream>
using namespace std;

void imprimir_espacos(int total);

int main()
{
	// Quantidade Total de Espaços
	int total_espacos = 100;
	
	for (int rodada = 0; rodada < total_espacos; rodada++)
{
	//Transformando num carrinho
	imprimir_espacos (rodada);
	cout << "  _  " << endl;
	imprimir_espacos(rodada);
	cout << "-o-o>" << endl;

	system("cls");
	rodada++;
	
	}
	return 0;
}

void imprimir_espacos(int total)
{    
	// Quantidade Atual de Espaços
	for (int quantidade_atual = 0; quantidade_atual < total; quantidade_atual++)
    {
	     cout << " ";
	  
    }
}