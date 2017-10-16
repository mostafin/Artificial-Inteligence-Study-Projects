#include <iostream>
#include <cmath>

using namespace std;



struct Perceptron {
	int inputs;
	int bias;
	double *weights;
	bool active(double suma) {
		if (suma > 0)
			return 1;
		else
			return 0;
		
	};
	double wynik(int tab[]) {
		double sum = 0;
		for (int i = 0; i < this->inputs; i++) {
			sum += tab[i] * this->weights[i];
		}
		return active(sum);
	};

	void ucz(int tab[], double y, double lr) {
		double ys = this->wynik(tab);

		for (int i = 0; i < this->inputs; i++) {
			this->weights[i] += (y - ys) * lr * tab[i];
		}
	}
	Perceptron(int _inputs) {
		this->inputs = _inputs;
		this->weights = new double[inputs];

		for (int i = 0; i < inputs; i++) {
			this->weights[i] = 0.5;
		}
	};
};

