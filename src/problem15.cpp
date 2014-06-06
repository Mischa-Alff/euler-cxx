/* I'm aware this is a very messy solution, but it's very fast.
 * I had to use double here because 40! and even 20! are too big
 *  to fit in an uint64_t.
 * Thanks to http://www.robertdickau.com/manhattan.html
 */

#include <cmath>
#include <iostream>

long double factorial(uint64_t n)
{
	long double result=1;
	for(int i{1};i<=n;++i)
		result*=i;
	return result;
}

int main()
{
	long double f20 = factorial(20);
	std::cout<<(uint64_t)std::ceil(factorial(2*20)/(f20*f20))<<std::endl;
}