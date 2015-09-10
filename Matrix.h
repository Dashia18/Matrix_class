#include <vector>
#include <iostream>


class Matrix{

public:
	//default constructor
	Matrix();
	//constructor
	Matrix(int vec_size);
	Matrix(int vec_size1,int vec_size2);

	void print_matrix();
	inline int mSize(){return matrix.size();};
	

private:	
	
	
	std::vector<std::vector<int> > matrix;
};

