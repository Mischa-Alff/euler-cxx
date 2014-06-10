#include <set>
#include <cmath>
#include <iostream>

int main()
{
	std::set<double> vals;
	for(int a{2};a<=100;++a)
		for(int b{2};b<=100;++b)
			vals.insert(std::pow(a, b));
	std::cout<<vals.size()<<std::endl;
}