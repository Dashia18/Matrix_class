#include "Matrix.h"
#include <iostream>
using namespace std;



int main(){
	Matrix m1 = Matrix(3,3);
	Matrix m2 = Matrix(3,3);
	Matrix m3;
	//m1.print_matrix();
	m1.transponent();
	m1*m2;//can't return a matrix...
	m1+m2;
	m1-m2;

	return 0;
}

