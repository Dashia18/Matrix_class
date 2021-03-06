#include <vector>
#include <iostream>
#include <cmath>


class Matrix{

public:
	//default constructor
	Matrix();
	//constructor
	Matrix(const int vec_size);
	Matrix(const int vec_size1, const int vec_size2);	
	Matrix(const int vec_size1, const int vec_size2, int konst);
	void diagonal(int diagonal_element);

	inline int numRow(){return matrix.size();};
	inline int numCol(){return matrix[0].size();};
	void print_matrix();
	void determinant();

	std::vector<std::vector<int> > transponent();
	std::vector<std::vector<int> > operator* (Matrix m2);//need return Matrix type!!
	std::vector<std::vector<int> > operator+ (Matrix m2);
	std::vector<std::vector<int> > operator- (Matrix m2);
	

private:	
	std::vector<std::vector<int> > matrix;
	std::vector<std::vector<int> > trans_matrix;
	std::vector<std::vector<int> > mutl_res;
	std::vector<std::vector<int> > add_res;
	std::vector<std::vector<int> > sub_res;
	
};

