#include <vector>
#include <iostream>

int main()
{
	std::vector<uint8_t> number{1};
	for(int i{0};i<1000;++i)
	{
		for(int j=number.size()-1;j>=0;--j)
		{
			number[j]*=2;
			if(number[j]>9)
			{
				number[j]%=10;
				if(number.size()-1<=j+1)
					number.push_back(0);
				number[j+1]++;
			}
		}
	}
	uint64_t solution{0};
	for(auto i : number)
		solution+=i;
	std::cout<<solution<<std::endl;
}