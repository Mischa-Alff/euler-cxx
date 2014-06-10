#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

bool is_palindrome(int n)
{
	auto s = std::to_string(n);
	size_t len = s.length();
	for(int i=0;i<len/2;++i)
		if(s[i]!=s[len-i-1])
			return false;
	return true;
}

int main()
{
	std::vector<int> palindromes;
	int solution{0};
	for(int x{999};x>=100&&!solution;--x)
		for(int y{x};y>=100&&!solution;--y)
			if(is_palindrome(x*y))
				palindromes.push_back(x*y);
	std::sort(palindromes.begin(), palindromes.end());
	std::cout<<palindromes.back()<<std::endl;
}