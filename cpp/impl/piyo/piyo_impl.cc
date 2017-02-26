#include "piyo/piyo.h"
#include "hoge/hoge_impl.cc"
class PiyoImpl
{
public:
	int a;
	HogeImpl hi;
	PiyoImpl(Piyo& p) : a(p.a), hi(p.h) {}
	void print()
	{
		std::cout << "PiyoImpl::a = " << this->a << std::endl;
		hi.print();
	}
};
