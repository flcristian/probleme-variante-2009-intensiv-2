#include "varianta-24-functii.h"


// Varianta 24

// Problema 3
//
// a) Scrieţi definiţia completă a subprogramului 
// p care primeşte prin intermediul parametrului
// n un număr natural nenul(n≤100), iar prin 
// intermediul parametrului x un tablou
// unidimensional cu n componente întregi, de 
// maximum patru cifre fiecare.
// 
// Subprogramul furnizează prin intermediul 
// parametrului "mini" valoarea minimă din tabloul x, 
// prin intermediul parametrului "maxi" valoarea 
// maximă din x, iar prin intermediul parametrului 
// "sum" suma elementelor din tabloul x.

void solutievar24pb3a() {
	int n;
	int x[100];
	citireVar24Pb3(x, n);
	afisareVectorInt(x, n);
	int sum, mini, maxi;
	p(x, n, mini, maxi, sum);
	cout << "Minimul : " << mini << endl << "Maximul : " << maxi << endl << "Suma : " << sum;
}

// b) Scrieţi un program C/C++ care citeşte de la 
// tastatură o valoare naturală nenulă n, (3≤n≤100), 
// apoi cele n elemente distincte ale unui tablou 
// unidimensional x.
// 
// Fiecare dintre aceste elemente este un număr 
// natural având cel mult patru cifre.
// 
// Folosind apeluri utile ale subprogramului p, 
// programul calculează şi afişează pe ecran media 
// aritmetică a elementelor care ar rămâne în tabloul 
// x dacă s-ar elimina valoarea minimă şi valoarea
// maximă din tablou.
// 
// Valoarea afişată va avea cel  mult 3 cifre după 
// virgulă.
// 
// Exemplu dacă se citesc pentru n valoarea 5, iar 
// pentru tabloul x valorile (1, 9, 4, 8, 5),
// programul va afişa una dintre valorile 
// 5.667 sau 5.666.

void solutievar24pb3b() {
	int n;
	int x[100];
	citireVar24Pb3(x, n);
	afisareVectorInt(x, n);
	int sum, mini, maxi;
	p(x, n, mini, maxi, sum);
	eliminareMinMaxVar24(x, n, mini, maxi, sum);
	double medie = medieVar24(x, n, sum);
	cout << medie << endl;
}

// Problema 4
// Fişierul text bac.txt conţine pe prima linie 
// numărul natural n, 1≤n≤30000, pe următoarele
// n linii un şir de n numere întregi, ordonate 
// crescător, iar pe ultima linie două numere întregi
// a şi b(a≤b) separate de un spaţiu.
// 
// Fiecare dintre cele n numere, precum şi valorile 
// a şi b, au cel mult patru cifre.
//
// Scrieţi un program C/C++, eficient din punct de 
// vedere al timpului de executare, care afişează 
// pe ecran cel mai mic număr întreg din intervalul 
// închis[a, b] care se găseşte în şirul dat.
// 
// Dacă nu există un astfel de număr, programul 
// afişează textul NU.
// 
// Exemplu dacă fişierul bac.txt are conţinutul :
// 
//				4
//				-2
//				7
//				11
//				35
//				8 15
//
// Se afiseaza 11.

void solutievar24pb4() {
	int n, a, b;
	int x[100];
	citireVar24Pb4(x, n, a, b);
	afisareVectorInt(x, n);
	cout << endl;
	int v[100];
	int d = 0;
	vectorNumereDinIntervalVar24(x, n, a, b, v, d);
	if (d != 0) {
		cout << "Intervalul este [" << a << ", " << b << "], iar numerele din acest interval prezente in vector sunt :" << endl;
		afisareVectorInt(v, d);
		cout << endl;
		cout << "Minimul din acest interval este : " << minIntervalVar24(v, d);
	}
	else {
		cout << "NU";
	}
}
