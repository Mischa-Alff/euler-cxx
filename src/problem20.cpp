#include <vector>
#include <iostream>

int main()
{
	std::vector<uint8_t> n{1};
	n.resize(158, 0);
	n[0]=1;
	int carry=0;
	for(int i{1};i<=100;++i)
	{
		carry=0;
		for(int j=0;j<n.size();++j)
		{
			auto tmp = (n[j]*i)+carry;
			n[j]=tmp%10;
			carry=tmp/10;
		}
	}

	int solution{0};

	for(auto i : n)
		solution+=i;

	std::cout<<solution<<std::endl;

}
