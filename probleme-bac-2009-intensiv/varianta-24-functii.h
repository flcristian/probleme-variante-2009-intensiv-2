#include "varianta-23.h"


// ==================
// Pentru Varianta 24
// ==================

// Problema 3

void citireVar24Pb3(int x[], int& n) {
	ifstream f("numere.txt");
	f >> n;

	for (int i = 0; i < n; i++) {
		f >> x[i];
	}
}

void p(int x[], int n, int& mini, int& maxi, int& sum) {
	sum = 0, mini = x[0], maxi = x[0];
	for (int i = 0; i < n; i++) {
		sum += x[i];
		if (x[i] > maxi) {
			maxi = x[i];
		}
		if (x[i] < mini) {
			mini = x[i];
		}
	}
}

void eliminareMinMaxVar24(int x[], int& n, int min, int max, int& sum) {
	int i = 0;
	while (i < n) {
		if (x[i] == min || x[i] == max) {
			sum -= x[i];
			for (int j = i; j < n - 1; j++) {
				x[j] = x[j + 1];
			}
			n--;
		}
		else {
			i++;
		}
	}
}

double medieVar24(int x[], int n, int sum) {
	double medie = sum;
	medie /= n;
	sum = medie * 1000;
	medie = sum;
	medie /= 1000;
	return medie;
}

// Problema 4

void citireVar24Pb4(int x[], int& n, int& a, int& b) {
	ifstream f("bac.txt");
	f >> n;

	for (int i = 0; i < n; i++) {
		f >> x[i];
	}

	f >> a, f >> b;
}

void vectorNumereDinIntervalVar24(int x[], int n, int a, int b, int v[], int& d) {
	for (int i = 0; i < n; i++) {
		if (x[i] >= a && x[i] <= b) {
			v[d] = x[i];
			d++;
		}
	}
}

int minIntervalVar24(int x[], int n) {
	int min = x[0];
	for (int i = 1; i < n; i++) {
		if (x[i] < min) {
			min = x[i];
		}
	}
	return min;
}