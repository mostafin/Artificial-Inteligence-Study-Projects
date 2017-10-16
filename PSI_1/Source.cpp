#include <iostream>
#include "Perceptron.h"
#include "Possibilities.h"
using namespace std;

void main() {
	

	int tab1[] = { 0,1,0,1 };
	int tab2[] = { 0,0,1,1 };
	int taby[] = { 0,0,0,1 };
	int liczba_sesji = 30; //sesje uczenia
	int bias = 1;
	double wsk_uczenia = 0.005;
	int inputs = 3;

	int t1[] = { bias,0,0 };
	int t2[] = { bias,0,1 };
	int t3[] = { bias,1,0 };
	int t4[] = { bias,1,1 };

	Perceptron *perceptron = new Perceptron(inputs);

	for (int i = 0; i < liczba_sesji; i++) {
		for (int j = 0; j < 4; j++) {
			int values[] = { bias, tab1[j], tab2[j] };
			perceptron->ucz(values, taby[j], wsk_uczenia);
		}

	}
	cout << perceptron->wynik(t1) << endl;
	cout << perceptron->wynik(t2) << endl;
	cout << perceptron->wynik(t3) << endl;
	cout << perceptron->wynik(t4) << endl;

	system("PAUSE");

}