//============================================================================
// Name        : basic_math.cpp
// Author      : Example
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "CBasicMath.h"

#include <iostream>
using namespace std;

int main() {
	CBasicMath basicMath;
    int x = 4;
    int y = 5;

    int z1 = basicMath.Addition(x, y);
    printf("\nAddition Result: %d\n", z1);

    int z2 = basicMath.Multiply(x, y);
    printf("\nMultiply Result: %d\n", z2);

	return 0;
}
