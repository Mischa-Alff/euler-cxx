#include <vector>
#include <iostream>

int main()
{
	std::vector<int> primes{2,3,5,7,11,13};
	int solution = primes.back();
	bool prime;
	while(primes.size() != 10001)
	{
		solution+=2;
		prime=true;
		for(auto i : primes)
		{
			if(!(solution%i))
			{
				prime=false;
				break;
			}
		}
		if(prime)
			primes.push_back(solution);
	}
	std::cout<<solution<<std::endl;
}