#include "varianta-95-functii.h"

// Varianta 95

// Problema 3
// Funcţia f primeşte prin intermediul parametrului n un număr 
// nenul(2≤n≤200), iar prin intermediul parametrului a un tablou 
// unidimensional care conţine n valori întregi nenule (fiecare 
// dintre aceste valori întregi având cel mult patru cifre).
// Funcţia returnează valoarea - 1 dacă numărul de valori negative 
// din tabloul a este strict mai mare decât numărul de valori 
// pozitive din tablou, valoarea 0 dacă numărul de valori
// negative din a este egal cu numărul de valori pozitive din tablou 
// şi valoarea 1 dacă numărul de valori pozitive din tabloul a este 
// strict mai mare decât numărul de valori negative din a.
// Scrieţi definiţia completă a funcţiei f.

void solutievar95sub3pb3() {
	int n;
	int a[200];
	citireVar95Sub3Pb3(n, a);
	rezolvareVar95Sub3Pb3(n, a);
}

// Problema 4
// Scrieţi un program C/C++ care citeşte de la tastatură un 
// număr natural nenul, S, având maximum 9 cifre, şi printr-o 
// metodă eficientă din punct de vedere al timpului de executare,
// determină şi scrie în fişierul rez.dat trei valori naturale 
// a căror sumă este egală cu S, şi al căror produs este maxim.
// Cele trei valori vor fi scrise în ordine crescătoare pe prima 
// linie a fişierului rez.dat, separate prin câte un spaţiu.
// Exemplu: dacă se citeşte valoarea 5, fişierul rez.dat va avea 
// o linie cu conţinutul 1 2 2.

void solutievar95sub3pb4() {
	int S;
	citireVar95Sub3Pb4(S);
	rezolvareVar95Sub3Pb4(S);
}