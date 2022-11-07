#include "varianta-21.h"

// ==================
// Pentru Varianta 22
// ==================

// Problema 4

void citireVar22Pb4(int x[10000][2], int& n) {
	ifstream f("BAC.txt");
	f >> n;

	for (int i = 0; i < n; i++) {
		f >> x[i][0], f >> x[i][1];
	}
}

void afisareMatriceVar22Pb4(int x[10000][2], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i][0] << " " << x[i][1] << endl;
	}
}

bool estePutereDe2(int n) {
	if (n == 0) {
		return false;
	}
	while (n != 1) {
		if (n % 2 == 1) {
			return false;
		}
		n /= 2;
	}
	return true;
}

int maxPutere2InInterval(int a, int b) {
	if (a > b) {
		int r = a;
		a = b;
		b = a;
	}
	int i = b;
	while (i >= a) {
		if (estePutereDe2(i)) {
			return i;
		}
		i--;
	}
	return 0;
}

void rezolvareVar22Pb4(int x[10000][2], int n, int r[]) {
	for (int i = 0; i < n; i++) {
		r[i] = maxPutere2InInterval(x[i][0], x[i][1]);
	}
}

void afisareRaspunsVar22Pb4(int r[], int n) {
	for (int i = 0; i < n; i++) {
		cout << r[i] << " ";
	}
}