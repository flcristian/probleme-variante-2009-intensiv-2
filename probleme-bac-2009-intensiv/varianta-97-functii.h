#include "varianta-96.h"

// ==================
// Pentru Varianta 97
// ==================

// Pentru Sub. III Pb. 3 a)

void citireVar97Sub3Pb3a(int& k) {
	cout << "Introduceti k : ";
	cin >> k;
}

int Calcul(int k, int v[]) {
	int s = 0;
	for (int i = k; i < 50; i++) {
		if (v[k] > 0) {
			s += v[k];
		}
	}
	return s;
}

// Pentru Sub. III Pb. 3 b)

void citireVar97Sub3Pb3b(int& x, int& y) {
	cout << "Introduceti x : ";
	cin >> x;
	cout << "Introduceti y : ";
	cin >> y;
}

int rezolvareVar97Sub3Pb3b(int x, int y, int v[]) {
	int r = Calcul(x, v) - Calcul(y, v);
	if (v[y] > 0) {
		r += v[y];
	}
	return r;
}

// Pentru Sub. III Pb. 4

void rezolvareVar97Sub3Pb4(int rootK, int k) {
	for (int x = 1; x < rootK; x++) {
		for (int y = rootK; y >= x; y--) {
			if (pow(x, 2) + pow(y, 2) == k) {
				cout << x << " " << y << endl;
			}
		}
	}
}