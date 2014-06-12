#include <cmath>
#include <vector>
#include <iostream>


bool is_prime(uint64_t n)
{
	for(int i=2;i<n;++i)
		if(!(n%i))
			return false;
	return true;
}

bool is_prime(uint64_t n, std::vector<bool> &primes)
{
	if(primes.size()>n)
		return primes[n];
	return false;
}

void eratosthenes(int max, std::vector<bool> &val)
{
	val.resize(max, true);
	val[0]=val[1]=false;
	int n=sqrt(val.size());
	for(int i{2};i<=n;++i)
		if(val[i])
			for(int j=i*i+i;j<val.size();j+=i)
				val[j]=false;
}

void eratosthenes2(int max, std::vector<bool> &val)
{
	val.resize(max, true);
	val[0]=val[1]=false;
	int n=sqrt(val.size());
	for(int i{2};i<=n;++i)
		if(val[i])
			for(int j=i*i-i;j<val.size();j+=i)
				val[j]=false;
	val[2]=true;
}