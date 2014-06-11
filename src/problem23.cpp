#include <set>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

uint32_t sum_of_divisors(uint32_t n)
{
	uint32_t a{0};
	uint32_t m=n/2;
	for(uint32_t i{1};i<=m;++i)
		if(!(n%i))
			a+=i;
	return a;
}

int main()
{
	std::vector<uint32_t> abundants;
	for(uint32_t i{0};i<=28123;++i)
		if(sum_of_divisors(i)>i)
			abundants.push_back(i);
	std::set<uint32_t> sums;
	for(uint32_t i{0};i<abundants.size();++i)
		for(uint32_t j{i};j<abundants.size();++j)
			sums.insert(abundants[i]+abundants[j]);
	uint64_t solution{0};
	for(uint32_t i{0};i<=28123;++i)
		if(sums.find(i) == sums.end())
			solution+=i;
	std::cout<<solution<<std::endl;
}
