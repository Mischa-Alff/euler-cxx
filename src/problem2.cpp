#include <iostream>

int main()
{
	int f{0}, s{1}, solution{0};
	while(f <= 4e6 && s <= 4e6)
	{
		f += s;
		if(!(f&1)) solution += f;
		if(!(s&1)) solution += s;
		s += f;
	}
	std::cout<<solution;
}