#include "varianta-96-functii.h"

// Varianta 96

// Problema 3
// Funcţia verif primeşte prin intermediul a trei parametri, 
// notaţi a, b şi c, trei valori naturale nenule, fiecare de 
// maximum patru cifre.Funcţia returnează valoarea 1 dacă cele trei 
// valori pot constitui laturile unui triunghi şi valoarea 0 în 
// caz contrar.
// a) Scrieti definitia completa functiei verif.

void solutievar96sub3pb3a() {
	int a, b, c;
	citireVar96Sub3Pb3a(a, b, c);
	cout << verif(a, b, c);
}

// b)  Scrieţi un program C/C++ care citeşte de la tastatură şase 
// valori naturale nenule, fiecare de maximum patru cifre, apoi 
// verifică, utilizând apeluri utile ale funcţiei verif, dacă 
// primele trei numere citite pot constitui laturile unui triunghi şi 
// dacă ultimele trei numere citite pot constitui laturile unui 
// triunghi; în caz afirmativ, programul afişează pe ecran mesajul
// congruente dacă cele două triunghiuri sunt congruente sau mesajul 
// necongruente dacă cele două triunghiuri nu sunt congruente; dacă 
// cel puţin unul dintre cele două triplete de valori nu pot 
// constitui laturile unui triunghi, programul va afişa pe ecran 
// mesajul nu.

void solutievar96sub3pb3b() {
	int a, b, c, d, e, f;
	citireVar96Sub3Pb3b(a, b, c, d, e, f);
	if (verif(a, b, c) && verif(d, e, f)) {
		if (congruente(a, b, c, d, e, f)) {
			cout << "congruente";
		}
		else {
			cout << "necongruente";
		}
	}
	else {
		cout << "nu";
	}
}

// Problema 4
// Fişierul BAC.DAT conţine pe prima linie, separate printr-un 
// spaţiu, două valori naturale n şi m (2≤n≤1000, 2≤m≤1000), 
// pe a doua linie n valori întregi şi pe a treia linie m valori 
// întregi.
// Valorile de pe a doua şi de pe a treia linie apar în fişier 
// în ordine strict crescătoare, sunt separate prin câte un spaţiu 
// şi au cel mult 4 cifre fiecare.
// Se cere afişarea pe ecran a două valori, dintre cele aflate în 
// poziţii consecutive pe a treia linie a fişierului, care determină 
// intervalul închis în care se află un număr maxim de valori de
// pe a doua linie a fişierului.
// Se va utiliza o metodă eficientă din punct de vedere al timpului 
// de executare şi al spaţiului de memorie utilizat.Se garantează că cel 
// puţin un număr aflat pe a doua linie a fişierului aparţine unuia 
// dintre intervalele determinate de numerele de pe a treia
// linie a fişierului.
// Exemplu: dacă fişierul BAC.DAT are conţinutul :
// 10 4
// -1 1 3 4 5 6 10 15 16 117
// 0 1 9 20
// Se va afişa : 1 9

void solutievar96sub3pb4() {
	int n, m;
	int x[100], y[100];
	citireVar96Sub3Pb4(n, m, x, y);
	int i = rezolvareVar96Sub3Pb4(n, m, x, y);
	cout << "Intervalul este : [" << y[i] << ", " << y[i + 1] << "]." << endl;
}