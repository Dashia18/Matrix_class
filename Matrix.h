#include <vector>
#include <iostream>


class Matrix{

public:
	//default constructor
	Matrix();
	//constructor
	Matrix(int vec_size);
	Matrix(int vec_size1,int vec_size2);
		
	inline int numRow(){return matrix.size();};
	inline int numCol(){return matrix[0].size();};
	void print_matrix();

	void transponent();
	

private:	
	std::vector<std::vector<int> > matrix;
	std::vector<std::vector<int> > trans_matrix;
};

