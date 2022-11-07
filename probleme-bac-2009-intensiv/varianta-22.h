#include "varianta-22-functii.h"

// Varianta 22

// Problema 4
//
// Scrieţi programul C / C++ care citeşte 
// din fişierul text BAC.TXT numărul întreg n
// (1≤n≤10000) şi un şir de n perechi de numere 
// întregi a b(1≤a≤b≤32000), fiecare pereche
// fiind scrisă pe o linie nouă a fişierului, cu 
// un spaţiu între cele două numere.Programul
// afişează pe ecran pentru fiecare pereche a, b 
// cel mai mare număr natural din intervalul
// închis[a, b]care este o putere a lui 2 sau 
// numărul 0 dacă nu există nicio putere a lui 
// 2 înintervalul respectiv.Numerele afișate pe 
// ecran se scriu în linie, separate prin câte un
// spașiu.
// 
// Un număr p este putere a lui 2 dacă există un 
// număr natural k astfel încât p = 2k.
//
// Exemplu dacă fişierul BAC.TXT conţine numerele :
// 3
// 2 69
// 10 20
// 19 25
// 
// Se afiseaza : 64 16 0.

void solutievar22pb4() {
	int n;
	int x[10000][2];
	citireVar22Pb4(x, n);
	afisareMatriceVar22Pb4(x, n);
	int r[10000];
	rezolvareVar22Pb4(x, n, r);
	cout << "Raspunsul este : " << endl;
	afisareRaspunsVar22Pb4(r, n);
}
