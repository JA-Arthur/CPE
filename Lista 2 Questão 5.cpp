/*
Lista 2 Questão 5
Autor: João Arthur
Data: 31/03/2024
*/
#include <iostream>
using namespace std;

int main(){
	
	float comprimento;
	float largura;
	float area;
	
	cout << "Insira o comprimento da sala: ";
	cin >> comprimento;
	cout << "Insira a largura da sala: ";
	cin >> largura;
	
	area = comprimento * largura;
	
	cout << "A área da sala é de " << area << "m²";
	
	return 0;
}
