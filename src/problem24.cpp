#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector<int> seq{0,1,2,3,4,5,6,7,8,9};
	std::sort(seq.begin(), seq.end());
	for(int i{1};i<1000000;++i)
	{
		int j=seq.size()-1;
		while(seq[j-1]>=seq[j])
			--j;
		int k=seq.size();
		while(seq[k-1]<=seq[j-1])
			--k;
		std::swap(seq[j-1], seq[k-1]);
		++j;
		k=seq.size();
		while(j<k)
		{
			std::swap(seq[j-1],seq[k-1]);
			++j;
			--k;
		}
	}
	for(auto i:seq)
		std::cout<<i;
	std::cout<<std::endl;
}