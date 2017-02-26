#include <iostream>
#include "hoge/hoge.h"
#include "piyo/piyo.h"

int main(int argc, char const* argv[])
{
	std::cout << "impl link test" << std::endl;
	
	Hoge h;
	h.a = 10;
	h.print();
	//HogeImpl hi; // compile error

	Piyo p;
	p.a = 1;
	p.h.a = 2;
	p.print();
	return 0;
}
