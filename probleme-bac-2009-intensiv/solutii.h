#include "functii.h"

// Varianta 18

// Problema 3
// 
// Scrieţi definiţia completă a subprogramului 
// count care are doi parametri, a şi n, prin care
// primeşte un tablou unidimensional cu maximum 
// 100 de numere reale şi respectiv numărul
// efectiv de elemente din tablou.Subprogramul 
// returnează numărul de elemente din tabloul a
// care sunt mai mari sau cel puţin egale cu media 
// aritmetică a tuturor elementelor din tablou.
// 
// Exemplu dacă tabloul are 6 elemente şi este 
// de forma(12, 7.5, 6.5, 3, 8.5, 7.5),
// subprogramul va returna valoarea 4
// (deoarece media tuturor elementelor este 7.5 şi
// numerele subliniate sunt cel puţin egale cu 
// această medie).

void solutievar18pb3() {
	int n;
	double a[100];
	citireTastaturaVar18(a, n);
	cout << "Avem : " << endl;
	afisareVectorDouble(a, n);
	double medie = medieAritmetica(a, n);
	int count = cateNrMaiMariMedieArit(a, n, medie);
	cout << "Media este " << medie << "." << endl;
	cout << "Sunt " << count << " elemente cu aceasta proprietate.";
}

// Problema 4
// 
// În fişierul numere.txt este memorat un şir de 
// maximum 10000 numere naturale, distincte două 
// câte două, cu maximum 4 cifre fiecare, separate 
// prin câte un spaţiu. Pentru un număr k citit de 
// la tastatură, se cere afişarea pe ecran a 
// poziţiei pe care se va găsi acesta în şirul de 
// numere din fişier, dacă şirul ar fi ordonat 
// descrescător, sau mesajul nu există, dacă
// numărul k nu se află printre numerele din fişier.
// 
// Alegeţi un algoritm eficient de rezolvare din
// punct de vedere al memoriei utilizate şi al 
// timpului de executare.
// 
// Exemplu dacă fişierul numere.txt conţine 
// numerele 26 2 5 30 13 45 62 7 79, iar k are 
// valoarea 13, se va afişa 6 deoarece 13 s-ar 
// găsi pe poziţia a şasea în şirul ordonat 
// descrescător (79 62 45 30 26 13 7 5 2).

void solutievar18pb4() {
	int n, k;
	int x[10000];
	citireFisierPb4Var18(x, n);
	cout << "Avem : ";
	afisareVectorInt(x, n);
	cout << "Introduceti k : ";
	cin >> k;
	int cateMaiMariCaSiK = cateMaiMariK(x, n, k);
	cout << "Numarul " << k << " s-ar afla pe pozitia " << cateMaiMariCaSiK + 1 << " a vectorului ordonat descrescator.";
}

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

// Varianta 21

// Problema 3
// 
// Scrieţi definiţia completă a unui subprogram i_prim 
// care primeşte prin singurul său parametru, n, un număr
// natural din intervalul[2, 30000] şi returnează 
// diferenţa minimă p2 - p1 în care p1 şi p2 sunt numere 
// prime şi p1≤n≤p2.
// 
// Exemplu dacă n = 20 atunci i_prim(n) = 4, 
// valoare obţinută pentru p1 = 19 şi p2 = 23.

void solutievar21pb3() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int p1 = primMaiMic(n);
	int p2 = primMaiMare(n);
	cout << "Numerele prime mai mici si mai mari ca n sunt : " << p1 << " si " << p2 << "." << endl;
	cout << "Astfel, raspunsul este " << p2 - p1 << ".";
}

// Problema 4
//
// Fişierul text BAC.TXT conţine pe prima linie două 
// numere naturale n şi k separate de un spaţiu
// (3≤n≤10000, 2≤k≤n / 2), iar pe a doua linie un şir de 
// n numere naturale x1, x2, ...,xn separate prin câte un \
// spaţiu, fiecare număr din acest şir având cel mult 
// patru cifre.
// 
// a) Scrieţi un program C / C++ care citeşte numerele 
// din fişier şi determină, utilizând o metodă eficientă 
// din punct de vedere al timpului de executare, cel mai 
// mic indice i(1≤i≤n - k + 1) pentru care media aritmetică 
// a numerelor xi, xi + 1, ..., xi + k - 1 este maximă.
// 
// Programul afişează valoarea lui i pe ecran.
// 
// Exemplu pentru : 
// 
//	8 3
//	2 9 4 7 5 2 9 9
//
// Se afiseaza 2, deoarece media maximă se obţine
// pentru 9, 4, 7.

void solutievar21pb4() {
	int n, k;
	int x[100];
	citireFisierVar21(x, n, k);
	cout << "Avem :" << endl;
	afisareVectorInt(x, n);
	int i = max(x, n, k);
	cout << "Indicele secventei este : " << i + 1 << ".";
}

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

// Varianta 24

// Problema 3
//
// a) Scrieţi definiţia completă a subprogramului 
// p care primeşte prin intermediul parametrului
// n un număr natural nenul(n≤100), iar prin 
// intermediul parametrului x un tablou
// unidimensional cu n componente întregi, de 
// maximum patru cifre fiecare.
// 
// Subprogramul furnizează prin intermediul 
// parametrului "mini" valoarea minimă din tabloul x, 
// prin intermediul parametrului "maxi" valoarea 
// maximă din x, iar prin intermediul parametrului 
// "sum" suma elementelor din tabloul x.

void solutievar24pb3a() {
	int n;
	int x[100];
	citireVar24Pb3(x, n);
	afisareVectorInt(x, n);
	int sum, mini, maxi;
	p(x, n, mini, maxi, sum);
	cout << "Minimul : " << mini << endl << "Maximul : " << maxi << endl << "Suma : " << sum;
}

// b) Scrieţi un program C/C++ care citeşte de la 
// tastatură o valoare naturală nenulă n, (3≤n≤100), 
// apoi cele n elemente distincte ale unui tablou 
// unidimensional x.
// 
// Fiecare dintre aceste elemente este un număr 
// natural având cel mult patru cifre.
// 
// Folosind apeluri utile ale subprogramului p, 
// programul calculează şi afişează pe ecran media 
// aritmetică a elementelor care ar rămâne în tabloul 
// x dacă s-ar elimina valoarea minimă şi valoarea
// maximă din tablou.
// 
// Valoarea afişată va avea cel  mult 3 cifre după 
// virgulă.
// 
// Exemplu dacă se citesc pentru n valoarea 5, iar 
// pentru tabloul x valorile (1, 9, 4, 8, 5),
// programul va afişa una dintre valorile 
// 5.667 sau 5.666.

void solutievar24pb3b() {
	int n;
	int x[100];
	citireVar24Pb3(x, n);
	afisareVectorInt(x, n);
	int sum, mini, maxi;
	p(x, n, mini, maxi, sum);
	eliminareMinMaxVar24(x, n, mini, maxi, sum);
	double medie = medieVar24(x, n, sum);
	cout << medie << endl;
}

// Problema 4
// Fişierul text bac.txt conţine pe prima linie 
// numărul natural n, 1≤n≤30000, pe următoarele
// n linii un şir de n numere întregi, ordonate 
// crescător, iar pe ultima linie două numere întregi
// a şi b(a≤b) separate de un spaţiu.
// 
// Fiecare dintre cele n numere, precum şi valorile 
// a şi b, au cel mult patru cifre.
//
// Scrieţi un program C/C++, eficient din punct de 
// vedere al timpului de executare, care afişează 
// pe ecran cel mai mic număr întreg din intervalul 
// închis[a, b] care se găseşte în şirul dat.
// 
// Dacă nu există un astfel de număr, programul 
// afişează textul NU.
// 
// Exemplu dacă fişierul bac.txt are conţinutul :
// 
//				4
//				-2
//				7
//				11
//				35
//				8 15
//
// Se afiseaza 11.

void solutievar24pb4() {
	int n, a, b;
	int x[100];
	citireVar24Pb4(x, n, a, b);
	afisareVectorInt(x, n);
	cout << endl;
	int v[100];
	int d = 0;
	vectorNumereDinIntervalVar24(x, n, a, b, v, d);
	if (d != 0) {
		cout << "Intervalul este [" << a << ", " << b << "], iar numerele din acest interval prezente in vector sunt :" << endl;
		afisareVectorInt(v, d);
		cout << endl;
		cout << "Minimul din acest interval este : " << minIntervalVar24(v, d);
	}
	else {
		cout << "NU";
	}
}

// Varianta 25

// Problema 3
//
// Subprogramul f primeşte prin intermediul parametrului 
// n un număr natural nenul(1≤n≤9), iar prin intermediul 
// parametrului a, un tablou unidimensional care conţine 
// n valori naturale, fiecare dintre acestea reprezentând 
// câte o cifră a unui număr.
// 
// Astfel, a0 reprezintă cifra unităţilor numărului, a1 
// cifra zecilor etc.
// 
// Subprogramul furnizează prin parametrul k o valoare 
// naturală egală cu numărul obţinut din cifrele pare 
// reţinute în tabloul a sau valoarea - 1 dacă în tablou 
// nu există nicio cifră pară.
// 
// Scrieţi definiţia completă a subprogramului f.
// 
// Exemple dacă subprogramul se apelează pentru n = 6 şi 
// pentru taboul a având valorile (2, 3, 5, 6, 4, 1), 
// parametrul k va furniza valoarea 462. Dacă subprogramul
// se apelează pentru n = 4 şi pentru a reţinând 
// valorile (0, 0, 1, 1), k va furniza valoarea 0. Dacă
// subprogramul se apelează pentru n = 3 şi pentru a 
// reţinând valorile(3, 7, 1), k va furniza valoarea - 1.

void solutievar25pb3() {
	int n;
	int a[100];
	citireVar25Pb3(a, n);
	afisareVectorInt(a, n);
	int k;
	f(a, n, k);
	cout << "k este " << k;
}

// Problema 4
// 
// Fişierul text NUMAR.TXT conţine pe prima linie un număr
// real pozitiv x care are cel mult două cifre la partea 
// întreagă şi cel mult şapte cifre după punctul zecimal..
// 
// a) Scrieţi un program C / C++ care, utilizând un 
// algoritm eficient din punct de vedere al timpului de 
// executare şi al memoriei utilizate, afişează pe ecran, 
// separate printr-un spaţiu, două numere naturale al 
// căror raport este egal cu x şi a căror diferenţă 
// absolută este minimă.
// Exemplu dacă fişierul conţine 0.375, se vor afişa pe 
// ecran numerele 3 8.

void solutievar25pb4() {
	double x;
	citireVar25Pb4(x);
	int a, b;
	rezolvareVar25Pb4(x, a, b);
	cout << a << " " << b;
}

// Varianta 26

// Problema 3
//
// Scrieţi programul C/C++ care citeşte de la 
// tastatură două numere naturale nenule n şi k
// (n≤100, k≤100) şi afişează pe ecran, 
// separaţi prin câte un spaţiu, în ordine
// descrescătoare, cei mai mici k multipli 
// naturali nenuli ai numărului n.
// 
// Exemplu pentru n = 6 şi k = 5 se afişează 
// 30 24 18 12 6.

void solutievar26pb3() {
	int n, k;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti k : ";
	cin >> k;
	int x[100];
	rezolvareVar26Pb3(n, k, x);
	cout << endl << "Primii " << k << " multiplii ai numarului " << n << " sunt :" << endl;
	afisareVar26Pb3(x, k);
}

// Problema 4
//
// a) Scrieţi definiţia completă a subprogramului 
// sterge, care primeşte prin cei 4 parametri
// v, n, i, j:
//  -v, un tablou unidimensional cu maximum 100 de 
//   elemente întregi din intervalul[-1000, 1000]
//  - n, un număr natural reprezentând numărul de 
//    elemente din tabloul v
//  - i şi j două valori naturale cu 1≤i≤j≤n
// şi elimină din tabloul v elementele 
// vi, vi + 1, …, vj actualizând valoarea 
// parametrului n.
// 
// Tabloul modificat este furnizat tot prin 
// parametrul v.

void solutievar26pb4a() {
	int n, i, j;
	int v[100];
	citireVar26Pb4a(v, n, i, j);
	afisareVectorInt(v, n);
	eliminareElementeIntreIJ(v, n, i, j);
	cout << endl;
	afisareVectorInt(v, n);
}

// b) Fişierul text NUMERE.IN conţine pe prima 
// linie un număr natural nenul n(1≤n≤100) şi pe
// următoarea linie n numere întregi din 
// intervalul[-1000; 1000], separate prin câte 
// un spaţiu.
// 
// Scrieţi un program C / C++ care citeşte din 
// fişierul NUMERE.IN numărul natural n, 
// construieşte în memorie un tablou 
// unidimensional v cu cele n numere întregi 
// aflate pe linia a doua în fişier şi utilizează 
// apeluri utile ale subprogramului sterge pentru 
// a elimina din tablou un număr minim de elemente
// astfel încât să nu existe două elemente 
// alăturate cu aceeaşi valoare.
// 
// Elementele tabloului obţinut se afişează pe 
// ecran, separate prin câte un spaţiu.
// 
// Exemplu dacă fişierul NUMERE.IN are conţinutul :
// 12 10 10 2 2 19 9 9 9 9 15 15 15
//
// Se afişează 
// 10 2 19 9 15.

void solutievar26pb4b() {
	int n;
	int v[100];
	citireVar26Pb4b(v, n);
	afisareVectorInt(v, n);
	elminareVar26Pb4b(v, n);
	cout << endl << "Dupa eliminarea acestor elemente, vectorul este :" << endl;
	afisareVectorInt(v, n);
}

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
	cout << "Raspunsul este : " << nreal;
}