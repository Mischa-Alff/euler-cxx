#include <iostream>


int main()
{
	constexpr int months = (2001-1901)*12;
	std::cout<<months/7<<std::endl;
}