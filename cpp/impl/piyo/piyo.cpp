#include <iostream>
#include "piyo/piyo.h"
#include "piyo/piyo_impl.cc"

void Piyo::print()
{
	std::cout << "Piyo::a = " << this->a << std::endl;
	this->h.print();
	PiyoImpl impl(*this);
	impl.print();
}
