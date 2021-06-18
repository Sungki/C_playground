#pragma once

class MySolution1
{
public:
    int solution(std::vector<int>& A, int X)
    {
        int N = A.size();
        if (N == 0) {
            return -1;
        }
        int l = 0;
        int r = N - 1;

        int  t = r;

        while (l < r && t > 0) 
        {
            int m = (l + r) / 2;

            if (A[m] > X) {
                r = m - 1;
            } else {
                l = m;
            }
            t--;
        }

        if (A[l] == X) {

            return l;
        }

        return -1;
    }
};