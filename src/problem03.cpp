#include <cmath>
#include <iostream>

constexpr uint64_t p = 600851475143;

int main()
{
	uint64_t i{sqrt(p)+1};

	for(;i>0;i-=2)
	{
		bool prime=true;

		if(p%i==0)
		{
			if(!(i&1)) prime=false;
			for(int j{3};j<i;j+=2)
				if(i%j==0)
					prime=false;
		}
		else prime=false;

		if(prime) break;
	}
	std::cout<<i<<std::endl;
}