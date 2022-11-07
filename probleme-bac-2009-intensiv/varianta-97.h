#include "varianta-97-functii.h"

// Varianta 97

// Problema 3
// Tabloul unidimensional V, declarat global, memorează exact 
// 50 de numere întregi : V1, V2, ..., V50.
// Subprogramul Calcul primeşte prin intermediul parametrului k 
// un număr natural nenul (k≤50) şi furnizează prin intermediul 
// parametrului S suma tuturor elementelor pozitive, din
// tabloul V, cu indici mai mari sau egali cu k sau 0 dacă toate 
// elementele menţionate sunt negative.
// a) Scrieţi doar antetul subprogramului Calcul.

void solutievar97sub3pb3a(int v[]) {
	int k;
	citireVar97Sub3Pb3a(k);
	cout << Calcul(k, v);
}

// b) Scrieţi un program în limbajul C/C++ care citeşte de la 
// tastatură cele 50 de componente întregi ale tabloului V şi două 
// numere naturale nenule x şi y(x < y≤50).Programul afişează
// suma elementelor pozitive din tablou, cu indici cuprinşi între 
// x şi y inclusiv, sau 0 dacă toate elementele menţionate sunt 
// negative, folosind apeluri utile la subprogramul Calcul.

void solutievar97sub3pb3b(int v[]) {
	int x, y;
	citireVar97Sub3Pb3b(x, y);
	cout << rezolvareVar97Sub3Pb3b(x, y, v);
}

// Problema 4
// Scrieţi un program C/C++ care citeşte din fişierul DATE.TXT 
// valoarea k şi afişează, pe ecran, toate perechile de numere 
// naturale nenule x, y(x≤y) cu proprietatea că x^2 + y^2 = k.
// Fiecare pereche va fi afişată pe câte o linie, numerele fiind 
// despărţite printr-un spaţiu.
// Alegeţi o metodă de rezolvare eficientă din punctul de vedere 
// al timpului de executare.
// Exemplu: dacă fişierul DATE.TXT conţine numărul 1000000, pe ecran
// se vor afişa, nu neapărat în această ordine, perechile alăturate.

void solutievar97sub3pb4() {
	int k;
	cout << "Introduceti k : ";
	cin >> k;
	int rootK = sqrt(k);
	rezolvareVar97Sub3Pb4(rootK, k);
}