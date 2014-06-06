#include <cstring>
#include <iostream>

constexpr unsigned int ones[] = {
	std::strlen("null"),
	std::strlen("one"),
	std::strlen("two"),
	std::strlen("three"),
	std::strlen("four"),
	std::strlen("five"),
	std::strlen("six"),
	std::strlen("seven"),
	std::strlen("eight"),
	std::strlen("nine"),
	std::strlen("ten"),
	std::strlen("eleven"),
	std::strlen("twelve"),
	std::strlen("thirteen"),
	std::strlen("fourteen"),
	std::strlen("fifteen"),
	std::strlen("sixteen"),
	std::strlen("seventeen"),
	std::strlen("eighteen"),
	std::strlen("nineteen")
};

constexpr unsigned int tens[] = {
	std::strlen("null"),
	std::strlen("ten"),
	std::strlen("twenty"),
	std::strlen("thirty"),
	std::strlen("forty"),
	std::strlen("fifty"),
	std::strlen("sixty"),
	std::strlen("seventy"),
	std::strlen("eighty"),
	std::strlen("ninety")
};

constexpr auto _and = std::strlen("and");
constexpr auto hundred = std::strlen("hundred");
constexpr auto thousand = std::strlen("thousand");

int main()
{
	uint64_t solution{0};
	for(int i{1};i<=1000;++i)
	{
		int _thousands = (i/1000)%10;
		int _hundreds  = (i/100 )%10;
		int _tens      = (i/10  )%10;
		int _ones      = (i/1   )%10;
		if(_thousands)
			solution+=ones[_thousands]+thousand;
		if(_hundreds)
			solution+=ones[_hundreds]+hundred+((_tens||_ones)?_and:0);
		if(_tens==1)
			solution+=ones[_ones+10];
		else if(_tens>1)
			solution+=tens[_tens];
		if(_ones&&_tens!=1)
			solution+=ones[_ones];
	}
	std::cout<<solution<<std::endl;
}