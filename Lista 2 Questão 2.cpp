/*
Lista 1, Quest�o 2
Autor: Jo�o Arthur
Data 30/03/2024
*/

#include <iostream>
using namespace std;

int main(){

	int numero1;
	int numero2;
	cout << "Insira dois n�meros: \n";
	cin >> numero1 >> numero2;
	
	int soma;
	int diferenca;
	int produto;
	int quociente;
	
	soma = numero1 + numero2;
	diferenca = numero1 - numero2;
	produto = numero1 * numero2;
	quociente = numero1 / numero2;
	
	cout << "A soma dos dois n�meros �: " << soma << "\n" << "A diferen�a dos dois n�meros �: " << diferenca << "\n" << "O produto dos dois n�meros �: " << produto << "\n" << "O quociente dos dois n�meros �: " << quociente; 
	
	return 0;
}
