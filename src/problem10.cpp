#include <cmath>
#include <vector>
#include <iostream>

void eratosthenes(int max, std::vector<bool> &val)
{
	val.resize(max, true);
	val[0]=val[1]=false;
	int n=sqrt(val.size());
	for(int i{2};i<=n;++i)
		if(val[i])
			for(int j=i*i-i;j<val.size();j+=i)
			{
				//std::cout<<j<<" is not prime\n";
				val[j]=false;
			}
	val[2]=true;
}

bool is_prime(uint64_t n)
{
	for(int i=2;i<n;++i)
		if(!(n%i))
			return false;
	return true;
}

int main()
{
	std::vector<bool> primes;
	eratosthenes(2000000, primes);
	uint64_t solution{0};
	for(int i=0;i<primes.size();++i)
		if(primes[i])
			solution+=i;
	std::cout<<solution<<std::endl;
}