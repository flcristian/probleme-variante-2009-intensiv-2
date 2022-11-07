#include "varianta-98-functii.h"

// Varianta 98

// Problema 3
// Scrieţi în limbajul C / C++ definiţia completă a 
// subprogramului numar, cu exact doi parametri,
// care primeşte prin intermediul parametrului x un număr 
// natural nenul de cel mult 2 cifre, şi prin intermediul 
// parametrului y un număr natural nenul de  cel mult 9 cifre.
// Subprogramul returnează cel mai mare număr natural z pentru 
// care există un număr natural k astfel încât z = xk şi z≤y.
// Exemplu: pentru y = 18 şi x = 2 subprogramul va returna 
// valoarea 16(= 24 < 18).

void solutievar98sub3pb3() {
	int x, y;
	citireVar98Sub3Pb3(x, y);
	cout << rezolvareVar98Sub3Pb3(x, y);
}

// Problema 4
// Pe prima linie a fişierului text DATE.TXT se află două 
// numere naturale nenule n şi m (n≤3000, m≤3000), pe a doua 
// linie un şir de n numere naturale, ordonate crescător, având
// fiecare cel mult 9 cifre, iar pe linia a treia un şir de m 
// numere naturale, ordonate descrescător, având fiecare cel mult
// 9 cifre. Numerele sunt despărţite, în cadrul liniilor, prin
// câte un spaţiu.
// Scrieţi programul C / C++ care citeşte numerele din fişier 
// şi afişează, pe ecran, doar numerele pare din cele două şiruri, 
// ordonate crescător.
// Programul nu va afişa nimic dacă nu există numere pare în cele 
// două şiruri. 
// Alegeţi o metodă de rezolvare eficientă ca timp de executare.
// Exemplu: dacă fişierul are conţinutul :
// 5 8
// 2 4 7 37 42
// 88 88 67 45 42 32 4 1
// Se va afişa : 2 4 4 32 42 42 88 88

void solutievar98sub3pb4() {
	int n, m;
	int x[100], y[100];
	citireVar98Sub3Pb4(n, m, x, y);
	int r[100];
	int k;
	rezolvareVar98Sub3Pb4(n, m, k, x, y, r);
	if (k != 0) {
		bubbleSortVar98Sub3Pb4(k, r);
		afisareVar98Sub3Pb4(k, r);
	}
	else {
		cout << "Nu exista numere pare." << endl;
	}
}