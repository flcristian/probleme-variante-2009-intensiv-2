#include "varianta-100-functii.h"

// Varianta 100

// Problema 3
// Scrieţi definiţia completă a subprogramului divizor, cu trei 
// parametri, prin care primeşte 3 numere naturale nenule cu cel 
// mult 9 cifre fiecare şi returnează numărul divizorilor comuni
// tuturor celor 3 numere.
// Exemplu: dacă numerele primite ca parametri sunt 24, 20 şi 12, 
// subprogramul returnează valoarea 3 
// (divizorii comuni sunt 1, 2 şi 4).

void solutievar100sub3pb3() {
	int a, b, c;
	citireVar100Sub3Pb3(a, b, c);
	cout << "Numarul de divizori comuni este : " << countDivComuniVar100(a, b, c);
}

// Problema 4
// ???

