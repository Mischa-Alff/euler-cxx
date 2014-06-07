#include <iostream>

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
	int solution{0};
	for(int i=1;i<10000;++i)
	{
		auto d = sum_of_divisors(i);
		if(i == sum_of_divisors(d) && d != i)
			solution+=i;
	}
	std::cout<<solution<<std::endl;
}