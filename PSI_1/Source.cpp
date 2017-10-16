#include <iostream>
#include "Perceptron.h"
#include "Possibilities.h"
using namespace std;

void main() {
	Possibilities *pos = new Possibilities[4];
	pos[0].a = 0; pos[0].b = 0; pos[0].wynik = 0;
	pos[1].a = 1; pos[1].b = 0; pos[1].wynik = 0;
	pos[2].a = 0; pos[2].b = 1; pos[2].wynik = 0;
	pos[3].a = 1; pos[3].b = 1; pos[3].wynik = 1;


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
			int values[] = { bias, pos[j].a, pos[j].b };
			perceptron->ucz(values, pos[j].wynik, wsk_uczenia);
		}

	}
	cout << perceptron->wynik(t1) << endl;
	cout << perceptron->wynik(t2) << endl;
	cout << perceptron->wynik(t3) << endl;
	cout << perceptron->wynik(t4) << endl;

	system("PAUSE");

}