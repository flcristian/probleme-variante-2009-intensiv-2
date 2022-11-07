#include "varianta-19.h"

// ==================
// Pentru Varianta 20
// ==================

// Problema 3

void citireTastaturaVar20(int x[], int& n) {
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Introduceti a[" << i << "] : ";
		cin >> x[i];
	}
}

void nule(int a[100], int n) {
	int i = n - 1, j = 0;
	while (i > j) {
		if (a[j] == 0) {
			if (a[i] != 0) {
				int r = a[i];
				a[i] = a[j];
				a[j] = r;
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

void atribuireVar20VectorZ(int x[], int y[], int z[], int n1, int n2, int& k) {
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
				i++;
			}
			else {
				j++;
			}
		}
	}
}