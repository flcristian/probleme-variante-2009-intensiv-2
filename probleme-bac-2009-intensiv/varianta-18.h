#include "varianta-18-functii.h"

// Varianta 18

// Problema 3
// 
// Scrieţi definiţia completă a subprogramului 
// count care are doi parametri, a şi n, prin care
// primeşte un tablou unidimensional cu maximum 
// 100 de numere reale şi respectiv numărul
// efectiv de elemente din tablou. Subprogramul 
// returnează numărul de elemente din tabloul a
// care sunt mai mari sau cel puţin egale cu media 
// aritmetică a tuturor elementelor din tablou.
// 
// Exemplu dacă tabloul are 6 elemente şi este 
// de forma(12, 7.5, 6.5, 3, 8.5, 7.5),
// subprogramul va returna valoarea 4
// (deoarece media tuturor elementelor este 7.5 şi
// numerele subliniate sunt cel puţin egale cu 
// această medie).

void solutievar18pb3() {
	int n;
	double a[100];
	citireTastaturaVar18(a, n);
	cout << "Avem : " << endl;
	afisareVectorDouble(a, n);
	double medie = medieAritmetica(a, n);
	int count = cateNrMaiMariMedieArit(a, n, medie);
	cout << "Media este " << medie << "." << endl;
	cout << "Sunt " << count << " elemente cu aceasta proprietate.";
}

// Problema 4
// 
// În fişierul numere.txt este memorat un şir de 
// maximum 10000 numere naturale, distincte două 
// câte două, cu maximum 4 cifre fiecare, separate 
// prin câte un spaţiu. Pentru un număr k citit de 
// la tastatură, se cere afişarea pe ecran a 
// poziţiei pe care se va găsi acesta în şirul de 
// numere din fişier, dacă şirul ar fi ordonat 
// descrescător, sau mesajul nu există, dacă
// numărul k nu se află printre numerele din fişier.
// 
// Alegeţi un algoritm eficient de rezolvare din
// punct de vedere al memoriei utilizate şi al 
// timpului de executare.
// 
// Exemplu dacă fişierul numere.txt conţine 
// numerele 26 2 5 30 13 45 62 7 79, iar k are 
// valoarea 13, se va afişa 6 deoarece 13 s-ar 
// găsi pe poziţia a şasea în şirul ordonat 
// descrescător (79 62 45 30 26 13 7 5 2).

void solutievar18pb4() {
	int n, k;
	int x[10000];
	citireFisierPb4Var18(x, n);
	cout << "Avem : ";
	afisareVectorInt(x, n);
	cout << "Introduceti k : ";
	cin >> k;
	int cateMaiMariCaSiK = cateMaiMariK(x, n, k);
	cout << "Numarul " << k << " s-ar afla pe pozitia " << cateMaiMariCaSiK + 1 << " a vectorului ordonat descrescator.";
}