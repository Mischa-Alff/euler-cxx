#include <vector>
#include <iostream>

int main()
{
	int solution{0}, len{0};

	for(int i{1000};i>1;--i)
	{
		if(len>i)
			break;
		std::vector<int> rem;
		rem.resize(i, 0);
		int val=1;
		int pos=0;

		while(!rem[val]&&val)
		{
			rem[val]=pos;
			val*=10;
			val%=i;
			++pos;
		}
		if(pos-rem[val]>len)
		{
			len=pos-rem[val];
			solution=i;
		}
	}
	std::cout<<solution<<std::endl;
}