#include <vector>
#include <iostream>
#include <algorithm>

int sum_of_divisors(int n)
{
	int a{0};
	for(int i{1};i<n;++i)
		if(!(n%i))
			a+=i;
	return a;
}

int main()
{
	std::vector<int> abundants;
	for(int i{0};i<=28123;++i)
		if(sum_of_divisors(i)>i)
			abundants.push_back(i);
	std::vector<int> sums;
	for(int i{0};i<abundants.size();++i)
		for(int j{i};j<abundants.size();++j)
			sums.push_back(abundants[i]+abundants[j]);
	uint64_t solution{0};
	for(int i{0};i<=28123;++i)
		if(std::find(sums.begin(), sums.end(), i) == sums.end())
			solution+=i;
	std::cout<<solution<<std::endl;
}
