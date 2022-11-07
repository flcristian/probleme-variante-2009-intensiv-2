#include "varianta-26-functii.h"

// Varianta 26

// Problema 3
//
// Scrieţi programul C/C++ care citeşte de la 
// tastatură două numere naturale nenule n şi k
// (n≤100, k≤100) şi afişează pe ecran, 
// separaţi prin câte un spaţiu, în ordine
// descrescătoare, cei mai mici k multipli 
// naturali nenuli ai numărului n.
// 
// Exemplu pentru n = 6 şi k = 5 se afişează 
// 30 24 18 12 6.

void solutievar26pb3() {
	int n, k;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti k : ";
	cin >> k;
	int x[100];
	rezolvareVar26Pb3(n, k, x);
	cout << endl << "Primii " << k << " multiplii ai numarului " << n << " sunt :" << endl;
	afisareVar26Pb3(x, k);
}

// Problema 4
//
// a) Scrieţi definiţia completă a subprogramului 
// sterge, care primeşte prin cei 4 parametri
// v, n, i, j:
//  -v, un tablou unidimensional cu maximum 100 de 
//   elemente întregi din intervalul[-1000, 1000]
//  - n, un număr natural reprezentând numărul de 
//    elemente din tabloul v
//  - i şi j două valori naturale cu 1≤i≤j≤n
// şi elimină din tabloul v elementele 
// vi, vi + 1, …, vj actualizând valoarea 
// parametrului n.
// 
// Tabloul modificat este furnizat tot prin 
// parametrul v.

void solutievar26pb4a() {
	int n, i, j;
	int v[100];
	citireVar26Pb4a(v, n, i, j);
	afisareVectorInt(v, n);
	eliminareElementeIntreIJ(v, n, i, j);
	cout << endl;
	afisareVectorInt(v, n);
}

// b) Fişierul text NUMERE.IN conţine pe prima 
// linie un număr natural nenul n(1≤n≤100) şi pe
// următoarea linie n numere întregi din 
// intervalul[-1000; 1000], separate prin câte 
// un spaţiu.
// 
// Scrieţi un program C / C++ care citeşte din 
// fişierul NUMERE.IN numărul natural n, 
// construieşte în memorie un tablou 
// unidimensional v cu cele n numere întregi 
// aflate pe linia a doua în fişier şi utilizează 
// apeluri utile ale subprogramului sterge pentru 
// a elimina din tablou un număr minim de elemente
// astfel încât să nu existe două elemente 
// alăturate cu aceeaşi valoare.
// 
// Elementele tabloului obţinut se afişează pe 
// ecran, separate prin câte un spaţiu.
// 
// Exemplu dacă fişierul NUMERE.IN are conţinutul :
// 12 10 10 2 2 19 9 9 9 9 15 15 15
//
// Se afişează 
// 10 2 19 9 15.

void solutievar26pb4b() {
	int n;
	int v[100];
	citireVar26Pb4b(v, n);
	afisareVectorInt(v, n);
	elminareVar26Pb4b(v, n);
	cout << endl << "Dupa eliminarea acestor elemente, vectorul este :" << endl;
	afisareVectorInt(v, n);
}