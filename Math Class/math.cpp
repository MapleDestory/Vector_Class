#include <iostream>

#include "math.hpp"



bool Get1(const Vec4F& v1, const Vec4F& v2)
{
	Vec4F Delta = (v2 - v1);
}
bool Get2(const Vec4F& v1, const float& v2)
{
	Vec4F vv;
	vv = v1;
	vv -= v2;
}

int main(int argc, char**  argv)
{
	Vec3I v1;
	Vec3I v2 ;
	Vec3I v3 = 1000;

	v1 = 1000;
	v2 = 2000;

	v3 += v2 + v1;

	printf("%i\n", v3.X);

	std::cin.get();

	return -1;
}