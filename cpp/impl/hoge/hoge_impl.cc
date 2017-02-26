#include "hoge/hoge.h"
class HogeImpl
{
public:
	int a;
	int b;
	HogeImpl(Hoge& h) : a(h.a), b(2345) {}
	void print()
	{
		std::cout << "HogeImpl::a = " << this->a << std::endl;
		std::cout << "HogeImpl::b = " << this->b << std::endl;
	}
};
