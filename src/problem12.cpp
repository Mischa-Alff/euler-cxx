#include <cmath>
#include <iostream>

int main()
{
	uint64_t solution=0;
	size_t divisors=0;
	int i=0;
	while(divisors<=500)
	{
		solution+=++i;
		divisors^=divisors;
		int tmp=sqrt(solution);
		for(int j{1};j<=tmp;++j)
			if(!(solution%j))
				divisors+=2;
	}
	std::cout<<solution<<std::endl;
}