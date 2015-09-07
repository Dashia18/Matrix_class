#include "Matrix.h"

Matrix::Matrix(){
	
}

Matrix::Matrix(int vec_size){
	for (int i = 0; i <vec_size; i++)
	{
		vec.push_back(0);
	}

}
