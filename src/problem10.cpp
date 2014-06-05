#include <vector>
#include <iostream>

int main()
{
	std::vector<uint64_t> primes{2,3,5,7};
	uint64_t n = primes.back();
	uint64_t solution = 0;
	bool prime;
	while(primes.back() < 2e6)
	{
		prime=true;
		for(auto j : primes)
		{
			if(!(n%j))
			{
				prime=false;
				break;
			}
		}
		if(prime)
			primes.push_back(n);
		n+=2;
	}
	for(auto i:primes)
		if(i<2e6)
			solution+=i;
	std::cout<<solution<<std::endl;
}