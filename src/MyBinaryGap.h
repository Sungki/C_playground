#pragma once

class MyBinaryGap
{
public:
	int solution(int N)
	{
		int ret = 0;

		std::string bin;
		while (N != 0)
		{
			bin = (N % 2 == 0 ? "0" : "1") + bin;
			N /= 2;
		}

		int max = 0;

		for (int i = 0; i < bin.length(); i++)
		{
			if (bin[i] == '1')
			{
				if (ret > max) max = ret;
				ret = 0;
			}
			else
			{
				ret++;
			}
		}

		return max;
	}
};