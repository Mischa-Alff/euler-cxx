#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> eratosthenes(int max)
{
	std::vector<bool> val;
	val.resize(max, true);
	val[0]=val[1]=false;
	int n=sqrt(val.size());
	for(int i{2};i<=n;++i)
		if(val[i])
			for(int j=1;(i*i+j*i)<val.size();j++)
				val[i*i+j*i]=false;
	std::vector<int> primes;
	for(int i{0};i<val.size();++i)
		primes.push_back(val[i]?i:false);
	return primes;
}

int main()
{
	auto primes=eratosthenes(1000);
	int num_primes{0}, sa, sb;

	for(int a=-999;a<1000;++a)
	{
		for(int b=a;b<1000;++b)
		{
			if(!primes[b])
				continue;
			bool prime=true;
			int n{0};
			for(;prime;++n)
			{
				int tmp=std::abs((n*n)+(a*n)+b);
				if(!primes[tmp])
					prime=false;
			}
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
