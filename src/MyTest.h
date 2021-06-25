#pragma once

#include <iostream>
#include <vector>

class MyTest
{
public:
	int Solution(std::vector<int> v)
	{
		int ret = 0;

		std::vector<int> temp(v);

		for (auto n : temp)
			std::cout << n << std::endl;

		return ret;
	}
};