#pragma once

#include <iostream>
#include <string>

class MyStoi
{
public:
	static int Stoi(std::string s)
	{
		try
		{
			int ret = std::stoi(s);
			return ret;
		}
		catch (const std::exception&)
		{
			return 0;
		}
	}
};