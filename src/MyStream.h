#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iterator>

class MyStream
{
public:
	static int FindInStream(std::istream& stream, std::string target)
	{
		stream.seekg(0, stream.end);
		unsigned int len = stream.tellg();
		stream.seekg(0, stream.beg);
		char* str = new char[len];
		stream.read(str, len);
		str[len] = NULL;

		char* p = strstr(str, target.c_str());
		int count = 0;
		int target_len = target.size();

		while (1)
		{
			if (p != NULL)
			{
				count++;
				strcpy(str, p + target_len);
				p = strstr(str, target.c_str());
			}
			else
				return count;
		}
	}
};