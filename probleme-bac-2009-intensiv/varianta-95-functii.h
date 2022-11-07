#include "varianta-27.h"

// ==================
// Pentru Varianta 95
// ==================

// Problema Sub. III Pb. 3

void citireVar95Sub3Pb3(int& n, int a[]) {
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Introduceti a[" << i << "] : ";
		cin >> a[i];
	}
}

void rezolvareVar95Sub3Pb3(int n, int a[]) {
	int raspuns;
	int count_pozitive = 0, count_negative = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			count_negative++;
		}
		else {
			count_pozitive++;
		}
	}

	if (count_pozitive == count_negative) {
		cout << "Raspunsul este 0. (Sunt la fel de multe numere pozitive si negative)" << endl;
	}
	else if (count_pozitive > count_negative) {
		cout << "Raspunsul este 1. (Sunt mai multe numere pozitive decat negative)" << endl;
	}
	else {
		cout << "Raspunsul este -1. (Sunt mai multe numere negative decat pozitive)" << endl;
	}
}

// Problema Sub. III Pb. 4

void citireVar95Sub3Pb4(int& S) {
	cout << "Introduceti S : ";
	cin >> S;
}

void rezolvareVar95Sub3Pb4(int S) {
	int rest = S % 3;
	string raspuns = "";
	for (int i = 0; i < 3; i++) {
		int nr = S / 3;
		if (rest > 0) {
			nr++;
			rest--;
		}

		raspuns += to_string(nr);
		if (i != 2) {
			raspuns += " ";
		}
	}

	ofstream f("rez.txt");
	f << raspuns;
	cout << raspuns;
}


