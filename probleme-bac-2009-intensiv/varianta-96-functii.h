#include "varianta-95.h"

// ==================
// Pentru Varianta 96
// ==================

// Pentru Sub. III Pb. 3 a)

void citireVar96Sub3Pb3a(int& a, int& b, int& c) {
	cout << "Introduceti valoarea lui a : ";
	cin >> a;
	cout << "Introduceti valoarea lui b : ";
	cin >> b;
	cout << "Introduceti valoarea lui c : ";
	cin >> c;
}

int maxValoare(int a, int b, int c) {
	int max = a;
	int i = 1;
	if (b > max) {
		max = b;
		i = 2;
	}
	if (c > max) {
		max = c;
		i = 3;
	}
	return i;
}

bool verif(int a, int b, int c) {
	int i = maxValoare(a, b, c);
	int l = 0;
	if (i == 1) {
		l = b + c;
	}
	else if (i == 2) {
		l = a + c;
	}
	else {
		l = a + b;
	}

	if (l > i) {
		return true;
	}
	else {
		return false;
	}
}

// Pentru Sub. III Pb. 3 b)

void citireVar96Sub3Pb3b(int& a, int& b, int& c, int& d, int& e, int& f) {
	cout << "Introduceti valoarea lui a : ";
	cin >> a;
	cout << "Introduceti valoarea lui b : ";
	cin >> b;
	cout << "Introduceti valoarea lui c : ";
	cin >> c;
	cout << "Introduceti valoarea lui d : ";
	cin >> d;
	cout << "Introduceti valoarea lui e : ";
	cin >> e;
	cout << "Introduceti valoarea lui f : ";
	cin >> f;
}

bool congruente(int a, int b, int c, int d, int e, int f) {
	if ((a / d) == (b / e) && (a / d) == (c / f)) {
		return 1;
	}
	else {
		return 0;
	}
}

// Pentru Sub. II Pb 4

void citireVar96Sub3Pb4(int& n, int& m, int x[], int y[]) {
	ifstream f("bac.txt");
	f >> n, f >> m;
	for (int i = 0; i < n; i++) {
		f >> x[i];
	}
	for (int i = 0; i < m; i++) {
		f >> y[i];
	}
}

int rezolvareVar96Sub3Pb4(int n, int m, int x[], int y[]) {
	int indice = 0;
	int max = 1;
	for (int i = 0; i < m - 1; i++) {
		int nr = 0;
		int s = y[i], d = y[i + 1];
		for (int i = 0; i < n; i++) {
			if (x[i] >= s && x[i] <= d) {
				nr++;
			}
		}
		if (nr > max) {
			max = nr;
			indice = i;
		}
	}
	return indice;
}

