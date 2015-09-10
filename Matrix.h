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

	
	

private:	
	std::vector<std::vector<int> > matrix;
};

