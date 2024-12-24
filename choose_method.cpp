#include "Header.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int method() {
	setlocale(0, "");
	int a;
	cout << " : выберите метод заполнения массива" << endl << " : (1 - вручную, 2 - из файла, 3 - рандомно)" << endl << " : --> ";
	cin >> a;
    if ((a <= 3) and (a >= 1))
        return a;
    else {
        do { cout << " : повторно введите метод заполнения --> "; cin >> a; } while ((a > 3) or (a < 1));
        return a;
    }
}
