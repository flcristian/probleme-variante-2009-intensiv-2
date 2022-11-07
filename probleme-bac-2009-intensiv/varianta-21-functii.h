#include "varianta-20.h"

// ==================
// Pentru Varianta 21
// ==================

// Problema 3

int countDiv(int n) {
	int c = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			c++;
		}
	}
	return c;
}

bool estePrim(int n) {
	if (countDiv(n) == 2) {
		return true;
	}
	return false;
}

int primMaiMic(int n) {
	int i = n;
	while (i != i - 1) {
		if (estePrim(i)) {
			return i;
		}
		else {
			i--;
		}
	}
}

int primMaiMare(int n) {
	int i = n;
	while (i != i - 1) {
		if (estePrim(i)) {
			return i;
		}
		else {
			i++;
		}
	}
}

// Problema 4

void citireFisierVar21(int x[], int& n, int& k) {
	ifstream f("BAC.txt");
	f >> n, f >> k;
	for (int i = 0; i < n; i++) {
		f >> x[i];
	}
}

int max(int x[], int n, int k) {
	int sMax = 0, indice = 0;
	for (int i = 0; i < n - k + 1; i++) {
		int j = i, s = 0;
		while (j < i + k) {
			s += x[j];
			j++;
		}
		if (s > sMax) {
			sMax = s;
			indice = i;
		}
	}
	return indice;
}
