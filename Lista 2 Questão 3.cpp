/*
Lista 1, Questão 3
Autor: João Arthur
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
	
	cout << "O diâmetro da circunferência é: " << diametro << "\n" << "A área da círculo é: " << area;
	
	return 0;
}
