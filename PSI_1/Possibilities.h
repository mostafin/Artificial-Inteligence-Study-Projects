#pragma once

struct Possibilities {
	int a, b;
	int wynik;
	Possibilities(int a, int b, int wynik) {
		this->a = a;
		this->b = b;
		this->wynik = wynik; //expected output
	}
	Possibilities() {};
};