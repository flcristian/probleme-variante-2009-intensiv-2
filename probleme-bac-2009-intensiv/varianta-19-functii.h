#include "varianta-18.h"
// ==================
// Pentru Varianta 19
// ==================

// Problema 3

void aranjareVar19Pb3(double x[], int n) {
	int i = n - 1, j = 0;
	while (i > j) {
		if (x[j] > 0) {
			if (x[i] < 0) {
				int r = x[j];
				x[j] = x[i];
				x[i] = r;
				i--;
				j++;
			}
			else {
				i--;
			}
		}
		else {
			j++;
		}
	}
}

// Problema 4

void citireFisierVar19Nr1(int x[], int& n1) {
	ifstream f("nr1.txt");
	f >> n1;

	for (int i = 0; i < n1; i++) {
		f >> x[i];
	}
}

void citireFisierVar19Nr2(int y[], int& n2) {
	ifstream f("nr2.txt");
	f >> n2;

	for (int i = 0; i < n2; i++) {
		f >> y[i];
	}
}

void atribuireVar19VectorZ(int x[], int y[], int z[], int n1, int n2, int& k) {
	int i = 0, j = 0;
	k = 0;
	while (i < n1 && j < n2) {
		if (x[i] == y[j]) {
			z[k] = x[i];
			i++;
			j++;
			k++;
		}
		else {
			if (x[i] < y[j]) {
				z[k] = x[i];
				i++;
				k++;
			}
			else {
				z[k] = y[j];
				j++;
				k++;
			}
		}
	}

	while (i < n1) {
		z[k] = x[i];
		i++;
		k++;
	}

	while (j < n2) {
		z[k] = y[j];
		j++;
		k++;
	}
}

