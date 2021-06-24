#pragma once
#include <map>
#include <vector>
#include <string>

class MySolution3
{
public:
	int solution(std::vector<int>& A)
	{
		std::map<std::string, int> cntMap;
		std::vector<int> tmp;

		for (auto n : A)
		{
			auto it = std::find(tmp.begin(), tmp.end(), n);
			if (it == tmp.end())
			{
				tmp.push_back(n);
			}
		}

		std::cout << "Ok!";

		return 0;
	}
};