

#include "foo.h"

int sum(int a, int b)
{
	return a + a + b;
}


	State::State(int a_, int b_) : a{a_}, b{b_}
	{

	}
	int State::Sum()
	{
		return a + a + b;
	}
	State::~State()
	{
		a = 0;
	}


