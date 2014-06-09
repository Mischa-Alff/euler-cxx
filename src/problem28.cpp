#include <iostream>

int main()
{
	int n=1001/2+1;
	int solution=0;
	for(int i=1;i<n;++i)
		solution+=(4*((2*i+1)*(2*i+1)))-12*i;
	++solution;
	std::cout<<solution<<std::endl;
}