#include "varianta-99.h"

// ===================
// Pentru Varianta 100
// ===================

// Pentru Sub. III Pb. 3

void citireVar100Sub3Pb3(int& a, int& b, int& c) {
	cout << "Introduceti primul numar : ";
	cin >> a;
	cout << "Introduceti al doilea numar : ";
	cin >> b;
	cout << "Introduceti al treilea numar : ";
	cin >> c;
}

int maxVar100(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	} 
	if (c > max) {
		max = c;
	}
	return max;
}

int countDivComuniVar100(int a, int b, int c) {
	int k = maxVar100(a, b, c);
	int count = 0;
	while (k != 0) {
		if (a % k == 0 && b % k == 0 && c % k == 0) {
			count++;
		}
		k--;
	}
	return count;
}

// Pentru Sub. III Pb. 4

