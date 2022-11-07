#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void afisareVectorDouble(double x[], int n) {
	cout << "x[" << n << "] = {";
	int c = n;
	for (int i = 0; i < n; i++) {
		cout << x[i];
		if (c > 1) {
			cout << ", ";
			c--;
		}
		else {
			cout << "}" << endl;
		}
	}
}

void afisareVectorInt(int x[], int n) {
	cout << "x[" << n << "] = {";
	int c = n;
	for (int i = 0; i < n; i++) {
		cout << x[i];
		if (c > 1) {
			cout << ", ";
			c--;
		}
		else {
			cout << "}" << endl;
		}
	}
}

// ==================
// Pentru Varianta 18
// ==================

// Problema 3

void citireTastaturaVar18(double x[], int& n) {
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Introduceti a[" << i << "] : ";
		cin >> x[i];
	}
}

double medieAritmetica(double x[], int n) {
	double s = 0;
	for (int i = 0; i < n; i++) {
		s += x[i];
	}
	return s / n;
}

int cateNrMaiMariMedieArit(double x[], int n, int medie) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] >= medie) {
			c++;
		}
	}
	return c;
}

// Problema 4

void citireFisierPb4Var18(int x[], int& n) {
	ifstream f("numere.txt");
	n = 0;

	while (!f.eof()) {
		f >> x[n];
		n++;
	}
}

int cateMaiMariK(int x[], int n, int k) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] > k) {
			c++;
		}
	}
	return c;
}