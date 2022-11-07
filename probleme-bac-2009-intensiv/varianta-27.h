#include "varianta-27-functii.h"

// Varianta 27

// Problema 3
// 
// Scrieţi definiţa completă a subprogramului 
// nreal cu doi parametri x şi y, numere naturale
// din intervalul[1; 1000] ce returnează un număr 
// real cu proprietatea că partea sa întreagă
// este egală cu x, iar numărul format din 
// zecimalele sale, în aceeaşi ordine, este egal 
// cu y.
// 
// Exemplu pentru x = 12 şi y = 543, subprogramul 
// returnează valoarea 12.543.

void solutievar27pb3() {
	int x, y;
	citireVar27Pb3(x, y);
	cout << "Raspunsul este : " << nreal(x, y);
}
