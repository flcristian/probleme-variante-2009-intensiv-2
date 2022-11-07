#include "varianta-19-functii.h"

// Varianta 19

// Problema 3
//
// Subprogramul aranjare are doi parametri: a prin 
// care primeşte un tablou unidimensional cu 
// maximum 100 de numere reale nenule şi n, numărul 
// de elemente din tablou.
// 
// Subprogramul rearanjează elementele tabloului 
// unidimensional astfel încât toate valorile
// negative să se afle pe primele poziţii, iar 
// valorile pozitive în continuarea celor negative.
//
// Ordinea în cadrul secvenţei de elemente pozitive, respectiv în cadrul secvenţei de elemente
// negative, poate fi oricare.Tabloul modificat va 
// fi furnizat tot prin intermediul parametrului a.
// 
// Exemplu dacă tabloul are 6 elemente şi este de 
// forma(12, -7.5, 6.5, -3, -8, 7.5), după apel, 
// acesta ar putea fi : (-7.5, -3, -8, 12, 6.5, 7.5).

void solutievar19pb3() {
	int n;
	double x[100];
	citireTastaturaVar18(x, n);
	cout << "Avem :" << endl;
	afisareVectorDouble(x, n);
	aranjareVar19Pb3(x, n);
	cout << "Dupa aranjare :" << endl;
	afisareVectorDouble(x, n);
}

// Problema 4
//
// În fişierul nr1.txt este memorată pe prima linie o 
// valoare naturală n de cel mult 8 cifre,iar pe linia 
// următoare sunt memorate n numere naturale, cu maximum 
// 4 cifre fiecare, ordonate strict crescător şi 
// separate prin câte un spaţiu.În fişierul nr2.txt este 
// memorată pe prima linie o valoare naturală m de cel 
// mult 8 cifre, iar pe linia următoare sunt memorate
// m numere naturale, cu maximum 4 cifre fiecare, 
// ordonate strict crescător şi separate prin
// câte un spaţiu.Se cere afişarea pe ecran, separate 
// prin câte un spaţiu, în ordine strict crescătoare, a 
// tuturor numerelor aflate pe a doua linie în cel puţin 
// unul dintre cele două fişiere.
// 
// În cazul în care un număr apare în ambele fişiere, 
// el va fi afişat o singură dată.
// 
// Alegeţi un algoritm de rezolvare eficient din punct 
// de vedere al memoriei utilizate şi al timpului de 
// executare.
//
// Exemplu pentru următoarele fişiere :
// 
// nr1.txt						nr2.txt
// 5							6
// 3 6 8 9 12					2 3 5 7 9 13
// 
// Se va afişa 2 3 5 6 7 8 9 12 13.

void solutievar19pb4() {
	int n1, n2, n3;
	int x[100], y[100], z[100];
	citireFisierVar19Nr1(x, n1);
	citireFisierVar19Nr2(y, n2);
	cout << "Avem :" << endl;
	afisareVectorInt(x, n1);
	afisareVectorInt(y, n2);
	atribuireVar19VectorZ(x, y, z, n1, n2, n3);
	cout << "Vectorul rezultat dupa aceasta operatie este :" << endl;
	afisareVectorInt(z, n3);
}
