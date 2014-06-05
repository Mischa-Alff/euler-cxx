#include <iostream>

int main()
{
	int solution=0;
	for(int i{1};i<=100;++i)
		solution+=i;
	solution*=solution;
	for(int i{1};i<=100;++i)
		solution-=i*i;
	std::cout<<solution<<std::endl;
}