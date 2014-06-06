#include <iostream>

int main()
{
	uint32_t solution{0};
	uint16_t steps{0};
	uint16_t cache[1000000];

	for(uint32_t i{1};i<1000000;++i)
	{
		uint32_t tmp=i;
		uint16_t j{0};
		for(;tmp!=1;++j)
		{
			if(tmp<i)
			{
				j+=cache[tmp];
				break;
			}
			if(tmp%2) ++(tmp*=3);
			else tmp/=2;
		}
		cache[i]=j;
		if(j>steps)
		{
			solution=i;
			steps=j;
		}
	}
	std::cout<<solution<<std::endl;
}