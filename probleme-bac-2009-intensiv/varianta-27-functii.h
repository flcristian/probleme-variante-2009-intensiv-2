#include "varianta-26.h"

// ==================
// Pentru Varianta 27
// ==================

// Problema 3

void citireVar27Pb3(int& x, int& y) {
	cout << "Introduceti x : ";
	cin >> x;
	cout << "Introduceti y : ";
	cin >> y;
}

int numarCifre(int n) {
	if (n == 0) {
		return 1;
	}

	int c = 0;

	while (n != 0) {
		n /= 10;
		c++;
	}
}

double nreal(int x, int y) {
	double nr = x * pow(10, numarCifre(y));
	nr += y;
	nr /= pow(10, numarCifre(y));
	return nr;
}
