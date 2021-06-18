#pragma once

class MySolution2
{
public:
    std::string solution(std::string &S) 
    {
        std::vector<std::string> removables = { "AB", "BA", "CD", "DC" };

        std::vector<std::string> total;

        std::string ret;

        for(int i = 0; i < S.size(); i++)
        {
            std::string temp = S.substr(i, 2);
            total.push_back(temp);
        }

        for (int i = 0; i < total.size(); i++)
        {
            for (int j = 0; j < removables.size(); j++)
            {
                auto it = std::find(total.begin(), total.end(), removables[j]);
                if (it == total.end() && total[i].size() == 2)
                {
                    ret.append(total[i]);
                }
            }
        }

        return ret;
    }
};