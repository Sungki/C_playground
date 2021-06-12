#pragma once
#include <algorithm>
#include <set>

class MySmallest
{
public:
	int solution(std::vector<int> &A)
	{
		int len = A.size();
		if (len <= 0) return 1;

		std::set<int> s;

		for (auto n : A)
		{
			if (n > 0) s.insert(n);
		}

		int ret = 0;

		for (int i = 1; i < len+1; i++)
		{
			if (s.find(i) == s.end())
			{
				return i;
			}
			ret++;
		}

		if (ret > 0) return ret + 1;
		return 1;
	}
};