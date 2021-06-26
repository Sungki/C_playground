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

		for (int i = 0; i < temp.size()-i; i++)
			temp[i] = temp[temp.size() - 1 - i];

		return ret;
	}
};