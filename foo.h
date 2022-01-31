#pragma once

extern "C" int sum(int a, int b);


class State
{
	int a;
	int b;
public:
	State(int a_, int b_);
	int Sum();
	~State();
};