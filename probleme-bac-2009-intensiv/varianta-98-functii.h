#include "varianta-97.h"

// ==================
// Pentru Varianta 98
// ==================

// Pentru Sub. III Pb. 3

void citireVar98Sub3Pb3(int& x, int& y) {
	cout << "Introduceti x : ";
	cin >> x;
	cout << "Introduceti y : ";
	cin >> y;
}

int rezolvareVar98Sub3Pb3(int x, int y) {
	for (int z = y; z > 0; z--) {
		for (int k = 1; pow(x, k) < y; k++) {
			if (pow(x, k) == z) {
				return z;
			}
		}
	}
}

// Pentru Sub. IV Pb. 4

void citireVar98Sub3Pb4(int& n, int& m, int x[], int y[]) {
	ifstream f("date.txt");
	f >> n, f >> m;
	for (int i = 0; i < n; i++) {
		f >> x[i];
	}
	for (int i = 0; i < m; i++) {
		f >> y[i];
	}
}

void rezolvareVar98Sub3Pb4(int n, int m, int& k, int x[], int y[], int r[]) {
	k = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % 2 == 0) {
			r[k] = x[i];
			k++;
		}
	}
	for (int i = 0; i < m; i++) {
		if (y[i] % 2 == 0) {
			r[k] = y[i];
			k++;
		}
	}
}

void bubbleSortVar98Sub3Pb4(int k, int r[]) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < k - 1; i++) {
			if (r[i] > r[i + 1]) {
				int z = r[i];
				r[i] = r[i + 1];
				r[i + 1] = z;
				flag = false;
			}
		}
	} while (flag == false);
}

void afisareVar98Sub3Pb4(int k, int r[]) {
	for (int i = 0; i < k; i++) {
		cout << r[i] << " ";
	}
}