#include "varianta-22.h"

// ==================
// Pentru Varianta 23
// ==================

// Problema 4

void citireVar23Pb4(int x[100][100], int& n) {
	ifstream f("BAC.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> x[i][0], f >> x[i][1];
	}
}

void afisareVar23Pb4(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i][0] << " " << x[i][1] << endl;
	}
}

void eliminareLinieMatriceVar23(int x[100][100], int& n, int l) {
	for (int i = l; i < n - 1; i++) {
		for (int j = 0; j < 2; j++) {
			x[i][j] = x[i + 1][j];
		}
	}
	n--;
}

void unicitate(int x[100][100], int& n) {
	int i = 0;
	while (i < n) {
		int v[100];
		int d = 0;
		for (int j = i + 1; j < n; j++) {
			if (!(x[i][1]<x[j][0] || x[i][0]>x[j][1])) {
				v[d] = j;
				d++;
			}
		}
		if (d != 0) {
			v[d] = i;
			d++;
			for (int j = 0; j < d; j++) {
				eliminareLinieMatriceVar23(x, n, v[j]);
			}
		}
		else {
			i++;
		}
	}
}