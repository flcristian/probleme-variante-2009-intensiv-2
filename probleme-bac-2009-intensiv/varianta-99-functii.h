#include "varianta-98.h"

// ==================
// Pentru Varianta 99
// ==================

// Pentru Sub. III Pb. 3

void rezolvareVar99Sub3Pb3(int& k) {
	int n = 0;
	k /= 10;
	int i = 0;
	while (k / 10 > 0) {
		n += (k % 10) * pow(10, i);
		k /= 10;
		i++;
	}
	k = n;
}

// Pentru Sub. III Pb. 4

void citireVar99Sub3Pb4(int& n, int x[]) {
	ifstream f("date.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void rezolvareVar99Sub3Pb4(int x[], int n) {
	int max = 1;
	int indice = 0;
	for (int i = 0; i < n - 1; i++) {
		int nr = 1;
		int var = x[i] % 2 + 1;
		int j = i + 1;
		while (j < n && var % 2 == x[j] % 2) {
			j++;
			nr++;
			var++;
		}
		if (nr > max) {
			max = nr;
			indice = i;
		}
	}
	cout << max << endl;
	for (int i = indice, j = 0; j < max; i++, j++) {
		cout << x[i] << " ";
	}
}