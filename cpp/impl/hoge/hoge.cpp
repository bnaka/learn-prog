#include <iostream>
#include "hoge/hoge.h"
#include "hoge/hoge_impl.cc"

void Hoge::print()
{
	std::cout << "Hoge::a = " << this->a << std::endl;

	HogeImpl impl(*this);
	impl.print();
}
