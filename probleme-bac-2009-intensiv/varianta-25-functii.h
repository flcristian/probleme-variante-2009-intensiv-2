#include "varianta-24.h"

// ==================
// Pentru Varianta 25
// ==================

// Problema 3

void citireVar25Pb3(int x[], int& n) {
	ifstream f("numere.txt");
	f >> n;

	for (int i = 0; i < n; i++) {
		f >> x[i];
	}
}

void f(int x[], int n, int& k) {
	k = 0;
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % 2 == 0) {
			k = k + (x[i] * pow(10, j));
			j++;
		}
	}
	if (j == 0) {
		k = -1;
	}
}

// Problema 4

void citireVar25Pb4(double& x) {
	ifstream f("NUMAR.txt");
	f >> x;
}

int celMaiMareDivComun(int a, int b) {
	if (a > b) {
		int r = a;
		a = b;
		b = r;
	}

	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}

//int numarZecimale(double x) {
//	int ct = 0;
//	
//	while (round(x) != x) {
//		ct++;
//		x = x * pow(10, ct);
//		cout << round(x) << " - " << x << endl;
//	}
//	return ct;
//}
//
//void rezolvareVar25Pb4(double x, int& a, int& b) {
//	int nr = numarZecimale(x);
//	a = x * pow(10, nr);
//	b = pow(10, nr);
//	while (celMaiMareDivComun(a, b) != 1) {
//		int divizor = celMaiMareDivComun(a, b);
//		a /= divizor, b /= divizor;
//	}
//}

void rezolvareVar25Pb4(double x, int& a, int& b) {
	a = x * 10000000;
	b = 10000000;
	while (celMaiMareDivComun(a, b) != 1) {
		int divizor = celMaiMareDivComun(a, b);
		a /= divizor, b /= divizor;
	}
}