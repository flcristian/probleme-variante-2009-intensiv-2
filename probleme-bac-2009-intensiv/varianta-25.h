#include "varianta-25-functii.h"

// Varianta 25

// Problema 3
//
// Subprogramul f primeşte prin intermediul parametrului 
// n un număr natural nenul(1≤n≤9), iar prin intermediul 
// parametrului a, un tablou unidimensional care conţine 
// n valori naturale, fiecare dintre acestea reprezentând 
// câte o cifră a unui număr.
// 
// Astfel, a0 reprezintă cifra unităţilor numărului, a1 
// cifra zecilor etc.
// 
// Subprogramul furnizează prin parametrul k o valoare 
// naturală egală cu numărul obţinut din cifrele pare 
// reţinute în tabloul a sau valoarea - 1 dacă în tablou 
// nu există nicio cifră pară.
// 
// Scrieţi definiţia completă a subprogramului f.
// 
// Exemple dacă subprogramul se apelează pentru n = 6 şi 
// pentru taboul a având valorile (2, 3, 5, 6, 4, 1), 
// parametrul k va furniza valoarea 462. Dacă subprogramul
// se apelează pentru n = 4 şi pentru a reţinând 
// valorile (0, 0, 1, 1), k va furniza valoarea 0. Dacă
// subprogramul se apelează pentru n = 3 şi pentru a 
// reţinând valorile(3, 7, 1), k va furniza valoarea - 1.

void solutievar25pb3() {
	int n;
	int a[100];
	citireVar25Pb3(a, n);
	afisareVectorInt(a, n);
	int k;
	f(a, n, k);
	cout << "k este " << k;
}

// Problema 4
// 
// Fişierul text NUMAR.TXT conţine pe prima linie un număr
// real pozitiv x care are cel mult două cifre la partea 
// întreagă şi cel mult şapte cifre după punctul zecimal..
// 
// a) Scrieţi un program C / C++ care, utilizând un 
// algoritm eficient din punct de vedere al timpului de 
// executare şi al memoriei utilizate, afişează pe ecran, 
// separate printr-un spaţiu, două numere naturale al 
// căror raport este egal cu x şi a căror diferenţă 
// absolută este minimă.
// Exemplu dacă fişierul conţine 0.375, se vor afişa pe 
// ecran numerele 3 8.

void solutievar25pb4() {
	double x;
	citireVar25Pb4(x);
	int a, b;
	rezolvareVar25Pb4(x, a, b);
	cout << a << " " << b;
}
