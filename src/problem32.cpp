#include <set>
#include <cstring>
#include <iostream>

uint32_t concat(uint32_t a, uint32_t b)
{
	uint32_t c=b;
	do
		a*=10;
	while(c/=10);
	return a+b;
}

bool pandigital(uint32_t n)
{
	int d=0;
	int c=0;
	int tmp;
	do
	{
		tmp=d;
		d|=(1<<(n%10-1));
		if(tmp==d)
			return false;
		++c;
	} while(n/=10);
	return d==(1<<c)-1;
}

int main()
{
	std::set<uint32_t> solutions;
	uint32_t solution=0;
	for(uint32_t a=4;a<49;++a)
	{
		auto bend=10000/a;
		for(uint32_t b=(a>9)?123:1234;b<bend;++b)
		{
			auto res=a*b;
			auto c=concat(res, concat(a,b));
			if(c>=1e8 && c<1e9 && pandigital(c))
				solutions.insert(res);
		}
	}
	for(auto i:solutions)
		solution+=i;
	std::cout<<solution<<std::endl ;
}