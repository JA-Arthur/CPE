/*
Lista 2 Quest�o 5
Autor: Jo�o Arthur
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
	
	cout << "A �rea da sala � de " << area << "m�";
	
	return 0;
}
