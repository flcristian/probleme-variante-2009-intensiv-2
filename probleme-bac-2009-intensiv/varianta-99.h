#include "varianta-99-functii.h"

// Varianta 99

// Problema 3
// Subprogramul Nr are un singur parametru, k, prin intermediul 
// căruia primeşte un număr natural de cel puţin 3 cifre şi cel 
// mult 9 cifre, cu toate cifrele nenule. Subprogramul furnizează tot 
// prin intermediul parametrului k, valoarea obţinută prin eliminarea 
// primei şi ultimei cifre a numărului transmis la apel.
// Exemplu: dacă subprogramul primeşte prin intermediul parametrului 
// k valoarea 12438, în urma apelului subprogramului Nr, k va primi 
// valoarea 243.
// Scrieţi, în limbajul C / C++, definiţia completă a 
// subprogramului Nr.

void solutievar99sub3pb3() {
	int k;
	cout << "Introduceti k : ";
	cin >> k;
	rezolvareVar99Sub3Pb3(k);
	cout << "Raspunsul este : " << k << endl;
}

// Problema 4
// Scrieţi un program C/C++ care citeşte numerele din fişier 
// şi afişează pe ecran lungimea maximă a unei secvenţe de 
// numere din şir, cu proprietatea că oricare două numere din
// secvenţă, aflate pe poziţii consecutive, au parităţi diferite.
// Pe a doua linie a ecranului, programul va afişa o secvenţă de 
// lungime maximă, valorile fiind despărţite prin câte un spaţiu.
// Dacă există mai multe secvenţe de lungime maximă, se va afişa 
// una dintre ele, oricare.
// Alegeţi o metodă de rezolvare eficientă ca timp de executare.
// Exemplu: dacă fişierul conţine, în ordine, numerele 
// 2 4 3 2 7 4 6 2 7 8 12
// Se va afişa :
// 5
// 4 3 2 7 4

void solutievar99sub3pb4() {
	int x[100];
	int n;
	citireVar99Sub3Pb4(n, x);
	rezolvareVar99Sub3Pb4(x, n);
}