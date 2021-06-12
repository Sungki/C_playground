#pragma once

#include <vector>

class MyArrays
{
public:
	std::vector<int> solution(std::vector<int>& A, int K)
	{
/*		std::vector<int> temp = {};
		std::vector<int> ret(A);

		for (int j = 0; j < K; j++)
		{
			temp.push_back(ret.back());

			for (int i = 0; i < ret.size() - 1; i++)
			{
				temp.push_back(ret[i]);
			}

			ret = temp;
			temp.clear();
		}

		return ret;*/

		if (A.size() == 0)
			return A;

		for (int i = 0; i < K; i++)
		{
			int t = A.back();
			A.pop_back();
			A.insert(A.begin(), t);
		}

		return A;
	}

	int solution2(std::vector<int>& A)
	{
		int ret = 0;
		
		int index = 0;

		ret = A[0];

		for (int i = 0; i < A.size(); i++)
		{
			ret = A[i];
		}

		return ret;
	}
};