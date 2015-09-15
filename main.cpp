#include "Matrix.h"
#include <iostream>
using namespace std;



int main(){
	Matrix m1 = Matrix(3, 3, 0);
	//Matrix m2 = Matrix(3, 3, 5);
	//Matrix m3 = Matrix(3, 3, 1);
	//m1.print_matrix();
	//m1.transponent();
	//m1*m2;//can't return a matrix type...
	//m1+m2;
	//m1-m2;
	m1.diagonal(1);
	m1.print_matrix();
	return 0;
}

