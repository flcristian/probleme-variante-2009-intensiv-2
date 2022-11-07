#include "varianta-20-functii.h"


// Varianta 20

// Problema 3
//
// Subprogramul nule are doi parametri: a, prin care 
// primeşte un tablou unidimensional cu maximum 100 de 
// numere întregi, cu cel mult 4 cifre fiecare şi n, 
// numărul de elemente din tablou.
// 
// Subprogramul rearanjează elementele tabloului 
// unidimensional astfel încât toate valorile nule să 
// se afle la sfârşitul tabloului.Ordinea în cadrul 
// secvenţei de elemente nenule poate fi oricare.
// 
// Tabloul modificat este furnizat tot prin parametrul a.
//
// Exemplu dacă n = 6, a = (12, 0, 0, -3, -8, 0), 
// după apel, acesta ar putea fi :
// a = (12, -3, -8, 0, 0, 0).

void solutievar20pb3() {
	int n;
	int a[100];
	citireTastaturaVar20(a, n);
	cout << "Avem :" << endl;
	afisareVectorInt(a, n);
	nule(a, n);
	cout << "Dupa aranjare avem :" << endl;
	afisareVectorInt(a, n);
}

// Problema 4
//
// În fişierul nr1.txt este memorată pe prima linie o 
// valoare naturală n de cel mult 8 cifre, iar pe linia 
// următoare sunt memorate n numere naturale, cu maximum 
// 4 cifre fiecare, ordonate strict crescător şi separate
// prin câte un spaţiu.În fişierul nr2.txt este memorată
// pe prima linie o valoare naturală m de cel mult 8 
// cifre, iar pe linia următoare sunt memorate m numere 
// naturale, cu maximum 4 cifre fiecare, ordonate strict 
// crescător şi separate prin câte un spaţiu.
// 
// Se cere afişarea pe ecran, separate prin câte un 
// spaţiu, în ordine strict crescătoare, a tuturor 
// numerelor aflate pe a doua linie atât în primul cât 
// şi în al doilea fişier.
//
// Alegeţi un algoritm de rezolvare eficient din punct de 
// vedere al memoriei utilizate şi al timpului de 
// executare.
// 
// Exemplu pentru următoarele fişiere :
// 
// nr1.txt						nr2.txt
// 5							6
// 3 6 8 9 12					2 3 5 7 9 13
//
// Se va afişa 3 9.

void solutievar20pb4() {
	int n1, n2, n3;
	int x[100], y[100], z[100];
	citireFisierVar19Nr1(x, n1);
	citireFisierVar19Nr2(y, n2);
	cout << "Avem :" << endl;
	afisareVectorInt(x, n1);
	afisareVectorInt(y, n2);
	atribuireVar20VectorZ(x, y, z, n1, n2, n3);
	cout << "Vectorul rezultat dupa aceasta operatie este :" << endl;
	afisareVectorInt(z, n3);
}