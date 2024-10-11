#pragma once
#include <string>
using namespace std;
float sum(float a, float b)
{
	return a + b;
}
float dif(float a, float b)
{
	return a - b;
}
float multiply(float a, float b)
{
	return a * b;
}
float Div(float a, float b)
{
	return a / b;
}
float _min(float a, float b)
{
	if (a > b)
	{
		return b;
	}
	else if(a<b)
	{
		return a;
	}
	else
	{
		return 0;
	}
	
}
float _max(float a, float b)
{
	if (a > b)
	{
		return a;
	}
	else if (a < b)
	{
		return b;
	}
	else
	{
		return 0;
	}

}
float poz(float a)
{
	if (a >= 0)
	{
		return a;
	}
	else 
	{
		return 0;
	}
}
float neg(float b)
{
	if (b < 0)
	{
		return b;
	}
	else
	{
		return 0;
	}
}
int chet(int a)
{
	if (a % 2 == 0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}
int nechet(int b)
{
	if (b % 2 != 0)
	{
		return b;
	}
	else
	{
		return 0;
	}
}
float average(float a, float b)
{
	return(a + b) / 2;
}
