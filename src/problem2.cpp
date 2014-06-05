#include <iostream>

int main()
{
	int f{0}, s{1}, solution{0};
	while(f <= 4e6 && s <= 4e6)
	{
		f += s;
		if(f%2==0) solution += f;
		if(s%2==0) solution += s;
		s += f;
	}
	std::cout<<solution;
}