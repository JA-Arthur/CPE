/*
Lista 1, Quest�o 3
Autor: Jo�o Arthur
Data 30/03/2024
*/
#include <iostream>
using namespace std;


int main(){
	float raio;
	const float pi = 3.14159;
	cout << "Digite o valor do raio: \n";
	cin >> raio;
		float diametro;
		diametro = raio * 2;
		float area;
		area = pi * raio * raio;
	
	cout << "O di�metro da circunfer�ncia �: " << diametro << "\n" << "A �rea da c�rculo �: " << area;
	
	return 0;
}
