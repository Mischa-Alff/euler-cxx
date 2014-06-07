#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>

int main()
{
	std::ifstream f;
	f.open("assets/names.txt");
	std::vector<std::string> names;
	std::string in;
	while(std::getline(f, in, ','))
		names.push_back(in.substr(1, in.size()-2));
	std::sort(names.begin(), names.end());
	uint64_t solution{0};
	for(int i{0};i<names.size();++i)
	{
		int tmp=0;
		for(auto c : names[i])
			tmp += (c-'A'+1);
		solution += tmp*(i+1);
	}
	std::cout<<solution<<std::endl;
}