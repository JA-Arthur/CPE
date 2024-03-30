/*
Lista 1, Questão 2
Autor: João Arthur
Data 30/03/2024
*/

#include <iostream>
using namespace std;

int main(){

	int numero1;
	int numero2;
	cout << "Insira dois números: \n";
	cin >> numero1 >> numero2;
	
	int soma;
	int diferenca;
	int produto;
	int quociente;
	
	soma = numero1 + numero2;
	diferenca = numero1 - numero2;
	produto = numero1 * numero2;
	quociente = numero1 / numero2;
	
	cout << "A soma dos dois números é: " << soma << "\n" << "A diferença dos dois números é: " << diferenca << "\n" << "O produto dos dois números é: " << produto << "\n" << "O quociente dos dois números é: " << quociente; 
	
	return 0;
}
