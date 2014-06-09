#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

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

int main()
{
	std::vector<bool> primes;
	eratosthenes(972, primes);
	int16_t num_primes{0}, sa, sb, n;

	for(int16_t a{-999};a<999;a+=2)
	{
		for(int16_t b=(a>3)?a:3;b<998;b+=2)
		{
			if(!primes[b]) continue;
			for(n=0;primes[std::abs((n*n)+(a*n)+b)];++n);
			if(n>num_primes)
			{
				sa=a;
				sb=b;
				num_primes=n;
			}
		}
	}
	std::cout<<sa*sb<<std::endl;
}
