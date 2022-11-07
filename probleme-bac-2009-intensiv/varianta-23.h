#include "varianta-23-functii.h"

// Varianta 23

// Problema 3
//
// a) Scrieţi definiţia completă a 
// subprogramului shift care primeşte 
// prin intermediul parametrului n o 
// valoare naturală nenulă(n≤100), iar 
// prin intermediul parametrului x, un
// tablou unidimensional cu maximum 100 
// de componente.
// 
// Fiecare componentă a acestui tablou este 
// un număr întreg care are cel mult 4 cifre.
// 
// Subprogramul permută circular cu o
// poziţie spre stânga primele n elemente 
// ale tabloului x şi furnizează tabloul 
// modificat tot prin parametrul x.
// 
// Exemplu dacă înainte de apel n = 4 şi 
// x = (1, 2, 3, 4). 
//
// După apel x = (2, 3, 4, 1).
// 
// b) Scrieţi un program C / C++ care citeşte 
// de la tastatură o valoare naturală nenulă n
// (n≤100), apoi cele n elemente ale unui 
// tablou unidimensional x.
// 
// Programul va inversa ordinea elementelor 
// tabloului x folosind apeluri utile ale 
// subprogramului shift şi va afişa pe ecran, 
// separate prin câte un spaţiu, elementele 
// tabloului rezultat în urma acestei
// prelucrări.
// 
// Exemplu dacă se citesc pentru n valoarea 5, 
// iar tabloul x este(1, 2, 3, 4, 5) programul
// va determina ca x să devină (5, 4, 3, 2, 1).

void solutievar23pb3() {
	int d, n;
	int x[100];
	//???
}

// Problema 4
//
// Fişierul text BAC.TXT conţine pe prima linie 
// un număr natural nenul n(1≤n≤1000), iar pe
// fiecare dintre următoarele n linii, câte 
// două numere întregi a şi b(1≤a≤b≤32000), 
// fiecare pereche reprezentând un interval 
// închis de forma [a, b].
// 
// Scrieţi un program C / C++ care 
// determină intervalele care au 
// proprietatea că intersecţia cu oricare 
// dintre celelalte n - 1 intervale este vidă 
// şi afişează pe câte o linie a ecranului, 
// separate printr - un spaţiu, numerele care 
// reprezintă capetele intervalelor 
// determinate.
//
// Exemplu dacă fişierul BAC.TXT are 
// conţinutul alăturat:
// 
//		4
//		17 20
//		2 6
//		10 15
//		8 16
// 
// Se va afişa :
// 
//		2  6		sau			17 20
//		17 20					2  6

void solutievar23pb4() {
	int n;
	int x[100][100];
	citireVar23Pb4(x, n);
	afisareVar23Pb4(x, n);
	unicitate(x, n);
	cout << endl << "Raspunsul este :" << endl << endl;
	afisareVar23Pb4(x, n);
}