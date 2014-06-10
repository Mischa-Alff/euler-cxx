#include <cmath>
#include <string>
#include <iostream>

int main()
{
	uint32_t solution=0;
	for(uint32_t i=2;i<199000;++i)
	{
		auto s=i;
		auto tmp=0;
		do
		{
			auto t=s%10;
			tmp+=t*t*t*t*t;
		} while(s/=10);
		if(i==tmp)
			solution+=i;
	}
	std::cout<<solution<<std::endl;
}