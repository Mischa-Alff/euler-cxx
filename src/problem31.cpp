#include <iostream>

int main()
{
	int solution=0;
	for(int p1=0;p1<=200;++p1)
		for(int p2=0;p2<=100;++p2)
			for(int p5=0;p5<=40;++p5)
				for(int p10=0;p10<=20;++p10)
					for(int p20=0;p20<=10;++p20)
						for(int p50=0;p50<=4;++p50)
							for(int s1=0;s1<=2;++s1)
								for(int s2=0;s2<=1;++s2)
									if(p1+p2*2+p5*5+p10*10+p20*20+p50*50+s1*100+s2*200==200)
										++solution;
	std::cout<<solution<<std::endl;
}