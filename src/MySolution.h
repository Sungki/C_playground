#pragma once

class MySolution
{
public:
	int solution(int N)
	{
		int ret = 0;

		std::vector<int> v;

		while (N != 0)
		{
			int pop = N % 10;
			N /= 10;

			v.push_back(pop);
		}

		std::sort(v.begin(), v.end(), std::greater<int>());

		for(auto n : v)
		{ 
			ret = ret * 10 + n;
		}

		return ret;
	}
};