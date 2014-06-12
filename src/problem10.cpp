#include <cmath>
#include <vector>
#include <iostream>
#include "primes.hpp"

int main()
{
	std::vector<bool> primes;
	eratosthenes2(2000000, primes);
	uint64_t solution{0};
	for(int i=0;i<primes.size();++i)
		if(primes[i])
			solution+=i;
	std::cout<<solution<<std::endl;
}