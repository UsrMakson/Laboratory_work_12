#include "Header.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int method() {
	setlocale(0, "");
	int a;
	cout << " : �������� ����� ���������� �������" << endl << " : (1 - �������, 2 - �� �����, 3 - ��������)" << endl << " : --> ";
	cin >> a;
    if ((a <= 3) and (a >= 1))
        return a;
    else {
        do { cout << " : �������� ������� ����� ���������� --> "; cin >> a; } while ((a > 3) or (a < 1));
        return a;
    }
}
