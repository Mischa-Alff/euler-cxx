#include <vector>
#include <iostream>

std::vector<uint8_t> operator+(std::vector<uint8_t> &l, std::vector<uint8_t> &r)
{
	std::vector<uint8_t> result=l;
	if(result.size()<r.size())
		result.resize(r.size(), 0);
	size_t len=result.size();
	for(int i=0;i<len;++i)
	{
		auto tmp=result[i]+r[i];
		result[i]=tmp%10;
		int carry=tmp/10;
		int j{1};
		while(carry)
		{
			if(result.size() <= i+j)
				result.push_back(0);
			++result[i+j];
			carry=result[i+j]/10;
			result[i+j]%=10;
			++j;
		}
	}
	return result;
}

int main()
{
	std::vector<uint8_t> f{0}, s{1}, n;
	uint64_t solution{1};
	while(s.size()<1000)
	{
		n=f+s;
		f=s;
		s=n;
		solution++;
	}
	std::cout<<solution<<std::endl;
}