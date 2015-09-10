#include "Matrix.h"



Matrix::Matrix(){
	int vec_size1 = 1;
	int vec_size2 = 1;
	Matrix(vec_size1, vec_size2);
}

Matrix::Matrix(int vec_size){
	int vec_size1 = 1;
	int vec_size2 = vec_size;
	Matrix(vec_size1, vec_size2);

};

Matrix::Matrix(int vec_size1, int vec_size2){
	int k = 0;
    
	for (int i = 0; i <vec_size1; i++)
	{		
		std::vector <int> temp;
		for (int j = 0; j <vec_size2; j++)
		{
			
				temp.push_back(k);
				k++;
			
			std::cout<<temp[j]<<" ";
		}
		matrix.push_back(temp);
		std::cout<<"\n";
	}
	std::cout<<"matrix created... "<<"\n";
	}



void Matrix::print_matrix(){
	
	for (int i = 0; i <matrix.size(); i++)
	{		
		std::vector <int> temp = matrix[i];
		for (int j = 0; j <matrix[0].size(); j++)
		{
			std::cout<<temp[j]<<" ";
		}
		std::cout<<"\n";
	}
	std::cout<<"matrix printed.... "<<"\n";
}

void Matrix::transponent(){

	for (int j = 0; j <matrix[0].size(); j++)
	{
		std::vector <int> temp;
		for (int i = 0; i <matrix.size(); i++)
		{	
			std::vector <int> temp1 = matrix[i];
			temp.push_back(temp1[j]);
			std::cout<<temp[i]<<" ";
		}
		trans_matrix.push_back(temp);
		std::cout<<"\n";
	}	
	std::cout<<"matrix transponented... "<<"\n";
}
