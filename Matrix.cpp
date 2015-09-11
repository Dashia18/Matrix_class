#include "Matrix.h"



Matrix::Matrix(){
	int vec_size1 = 1;
	int vec_size2 = 1;
	Matrix(vec_size1, vec_size2);
}

Matrix::Matrix(const int vec_size){
	int vec_size1 = 1;
	int vec_size2 = vec_size;
	Matrix(vec_size1, vec_size2);

};

Matrix::Matrix(const int vec_size1, const int vec_size2){
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

std::vector<std::vector<int> > Matrix::transponent(){

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

	std::cout<<"matrix are transponented... "<<"\n";
	return trans_matrix;
}

std::vector<std::vector<int> > Matrix::operator* (Matrix m2){
	std::vector<std::vector<int> > matrix2T = m2.transponent();
	int k = 0;
	for (int k = 0; k <matrix.size(); k++)
	{
		std::vector <int> m1 = matrix[k];
		std::vector <int> temp_vec;
		for (int i = 0; i <matrix.size(); i++)
		{
			int temp=0;
			std::vector <int> m2 = matrix2T[i];

			for (int j = 0; j <matrix[0].size(); j++)
			{
				temp =temp +  m1[j]*m2[j];

			}
			temp_vec.push_back(temp);
			std::cout<<temp_vec[i]<<" ";
		}
		mutl_res.push_back(temp_vec);
		std::cout<<"\n";
	}
	std::cout<<"matrix are multed... "<<"\n";
	return mutl_res;
}

std::vector<std::vector<int> > Matrix::operator+ (Matrix m2){
	std::vector<std::vector<int> > matrix2 = m2.matrix;
	
	for (int i = 0; i <matrix.size(); i++)
	{
		int temp=0;
		std::vector <int> mx1 = matrix[i];
		std::vector <int> mx2 = matrix2[i];
		std::vector <int> temp_vec;

		for (int j = 0; j <matrix[0].size(); j++)
		{
			temp =  mx1[j] + mx2[j];
			temp_vec.push_back(temp);
			std::cout<<temp_vec[j]<<" ";
		}
		

		add_res.push_back(temp_vec);
		std::cout<<"\n";
	}

	return add_res;

}
std::vector<std::vector<int> > Matrix::operator- (Matrix m2){
	std::vector<std::vector<int> > matrix2 = m2.matrix;

	for (int i = 0; i <matrix.size(); i++)
	{
		int temp=0;
		std::vector <int> mx1 = matrix[i];
		std::vector <int> mx2 = matrix2[i];
		std::vector <int> temp_vec;

		for (int j = 0; j <matrix[0].size(); j++)
		{
			temp =  mx1[j] - mx2[j];
			temp_vec.push_back(temp);
			std::cout<<temp_vec[j]<<" ";
		}


		sub_res.push_back(temp_vec);
		std::cout<<"\n";
	}

	return sub_res;

}