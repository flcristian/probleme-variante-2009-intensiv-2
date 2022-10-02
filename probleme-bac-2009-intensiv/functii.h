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

// ==================
// Pentru Varianta 22
// ==================

// Problema 4

void citireVar22Pb4(int x[10000][2], int& n) {
	ifstream f("BAC.txt");
	f >> n;

	for (int i = 0; i < n; i++) {
		f >> x[i][0], f >> x[i][1];
	}
}

void afisareMatriceVar22Pb4(int x[10000][2], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i][0] << " " << x[i][1] << endl;
	}
}

bool estePutereDe2(int n) {
	if (n == 0) {
		return false;
	}
	while (n != 1) {
		if (n % 2 == 1) {
			return false;
		}
		n /= 2;
	}
	return true;
}

int maxPutere2InInterval(int a, int b) {
	if (a > b) {
		int r = a;
		a = b;
		b = a;
	}
	int i = b;
	while(i >= a){
		if (estePutereDe2(i)) {
			return i;
		}
		i--;
	}
	return 0;
}

void rezolvareVar22Pb4(int x[10000][2], int n, int r[]) {
	for (int i = 0; i < n; i++) {
		r[i] = maxPutere2InInterval(x[i][0], x[i][1]);
	}
}

void afisareRaspunsVar22Pb4(int r[], int n) {
	for (int i = 0; i < n; i++) {
		cout << r[i] << " ";
	}
}

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

double medieVar24(int x[], int n, int sum){
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

// ==================
// Pentru Varianta 26
// ==================

// Problema 3

void rezolvareVar26Pb3(int n, int k, int x[]) {
	for (int i = k - 1, j = 1; i > -1; i--, j++) {
		x[i] = n * j;
	}
}

void afisareVar26Pb3(int x[], int k) {
	for (int i = 0; i < k; i++) {
		cout << x[i] << " ";
	}
}

// Problema 4

void citireVar26Pb4a(int v[], int& n, int& i, int& j) {
	ifstream f("numere.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
	f >> i, f >> j;
}

void eliminareElementeIntreIJ(int v[], int& n, int i, int j) {
	i--, j--;
	int d = j - i + 1;
	for (int k = i, t = j + 1; d > 0; k++, d--) {
		v[k] = v[t];
		n--;
	}
}

void citireVar26Pb4b(int v[], int& n) {
	ifstream f("numere.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
}

void eliminareElementI(int v[], int& n, int i) {
	while (i < n - 1) {
		v[i] = v[i + 1];
		i++;
	}
	n--;
}

void elminareVar26Pb4b(int v[], int& n) {
	int i = 1;
	while (i < n) {
		if (v[i] == v[i - 1]) {
			eliminareElementI(v, n, i);
		}
		else {
			i++;
		}
	}
}

// ==================
// Pentru Varianta 27
// ==================

// Problema 3

void citireVar27Pb3(int& x, int& y) {
	cout << "Introduceti x : ";
	cin >> x;
	cout << "Introduceti y : ";
	cin >> y;
}

void numarCifre(int n) {
	if (n == 0) {
		return 1;
	}

	int c = 0;

	while (n != 0) {
		n /= 10;
		c++;
	}
}

double nreal(int x, int y) {

}