#include "Header.h"
#include <algorithm>
#include <clocale>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <locale>
#include <math.h>
#include <sstream>
#include <vector>

using namespace std;

void hand(vector <int>& arr, int n) {
	cout << "ручной ввод:" << endl;
	int x;
	for (int i = 0; i < n; i++) { 
		if (i == 1) {
			cout << " : "  << i + 1 << "-ой элемент" << endl
				 << " : --> ";
			cin >> x;
			arr.push_back(x);
		}
		else if (i == 2) {
			cout << i + 1 << "-ий элемент" << endl 
				 << " : --> ";
			cin >> x;
			arr.push_back(x);
		}
		else {
			cout << " : " << i + 1 << "-ый элемент" << endl
				 << " : --> ";
			cin >> x;
			arr.push_back(x);
		}	
	}
	reverse(arr.begin(), arr.end());
}
void izfaila(vector <int>& arr, int n) {
	int x;
    ifstream f;
    f.open("a.txt");
	for (int i = 0; i < n; i++) {
		f >> x;
		arr.push_back(x);
	}
    f.close();
	reverse(arr.begin(), arr.end());
}
void randomno(vector <int>& arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) { 
		arr.push_back(rand() % 100 - 0);
	}
}
void fillarr(vector <int> &arr, int n) {
	int a = method();
	switch (a)
	{
	case 1: hand(arr, n); break;
	case 2: izfaila(arr, n); break;
	case 3: randomno(arr, n); break;
	}
	cout << "-------------------------------------------------------------------" << endl;
	for (int i : arr) { cout << i << " "; }
}
