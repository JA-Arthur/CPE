/*
Lista 2, Questão 8
Autor: João Arthur
Data: 31/03/2024
*/
#include <iostream>
using namespace std;

int main(){
	
	int cateto_O;
	int cateto_A;
	int H;
	
	cout << "Insira o valor do Cateto Oposto: " << endl;
	cin >> cateto_O;
	cout << "Insira o valor do Cateto Adjacente" << endl;
	cin >> cateto_A;
	
	H = (cateto_O * cateto_O) + (cateto_A * cateto_A);
	
	cout << "A hipotenusa é: " << H;
	
	return 0;
}
