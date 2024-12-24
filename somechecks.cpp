#include "Header.h"
#include <iostream>
#include <typeinfo>

using namespace std;

bool checkcorrect(int n) {
	if (typeid(n) == typeid(int))
		return 1;
	else
		return 0;
}