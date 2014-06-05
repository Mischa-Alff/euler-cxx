#include <iostream>

int main()
{
	int solution{20};
	bool solved=false;
	while(!solved)
	{
		solution+=20;
		solved=true;
		for(int i=1;i<=20;++i)
			if(solution%i)
				solved=false;
	}
	std::cout<<solution<<std::endl;
}