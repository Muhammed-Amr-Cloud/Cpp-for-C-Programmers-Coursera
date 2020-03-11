//=============================================================
// convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function
//=============================================================

#include <iostream>
#include <vector>


const int N = 40 ;


template <typename T>

void sum(int& p, std::vector<T> &d)

{
	p = 0;

	for(unsigned int i = 0; i < d.size(); ++i)
	{
		p = p + d[i];
	}


}

int main()

{
	int i;
	int accum = 0;

	std::vector<int> data ;

	for(i = 0; i < N; ++i)
	{
		data.push_back(i);
	}

	sum(accum, data);
	std::cout<<"Sum is "<<accum <<std::endl ;

	return 0;

}

