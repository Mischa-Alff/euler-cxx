#include <iostream>

int main()
{
	int a, b, c;
	bool done=false;
	for(a=1;a<1000&&!done;++a)
		for(b=a;b<1000&&!done;++b)
			for(c=b;c<1000&&!done;++c)
				done = (a+b+c == 1000 && a*a+b*b == c*c);
	std::cout<<(a-1)*(b-1)*(c-1)<<std::endl;
}