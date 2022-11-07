#include "varianta-25.h"

// ==================
// Pentru Varianta 26
// ==================

// Problema 3

void rezolvareVar26Pb3(int n, int k, int x[]) {
	for (int i = k - 1, j = 1; i > -1; i--, j++) {
		x[i] = n * j;
	}
}

void afisareVar26Pb3(int x[], int k) {
	for (int i = 0; i < k; i++) {
		cout << x[i] << " ";
	}
}

// Problema 4

void citireVar26Pb4a(int v[], int& n, int& i, int& j) {
	ifstream f("numere.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
	f >> i, f >> j;
}

void eliminareElementeIntreIJ(int v[], int& n, int i, int j) {
	i--, j--;
	int d = j - i + 1;
	for (int k = i, t = j + 1; d > 0; k++, d--) {
		v[k] = v[t];
		n--;
	}
}

void citireVar26Pb4b(int v[], int& n) {
	ifstream f("numere.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
}

void eliminareElementI(int v[], int& n, int i) {
	while (i < n - 1) {
		v[i] = v[i + 1];
		i++;
	}
	n--;
}

void elminareVar26Pb4b(int v[], int& n) {
	int i = 1;
	while (i < n) {
		if (v[i] == v[i - 1]) {
			eliminareElementI(v, n, i);
		}
		else {
			i++;
		}
	}
}