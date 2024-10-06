#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

class Solution
{
public:
	std::vector<std::vector<int>> findWinners(std::vector<std::vector<int>>& matches)
	{
        std::unordered_map<int, int> winners;
        std::unordered_map<int, int> losers;

        for (const auto& match : matches)
        {
            int p1 = match[0];
            int p2 = match[1];

            if (winners.find(p1) == winners.end())
                winners[p1] = 1;
            else
                winners[p1]++;

            if (losers.find(p2) == losers.end())
                losers[p2] = 1;
            else
                losers[p2]++;
        }

        std::vector<std::vector<int>> result(2);
        std::set<int> checkRepeats;

        for (const auto& match : matches)
        {
            int p1 = match[0];
            int p2 = match[1];

            if (losers.find(p1) == losers.end() && checkRepeats.find(p1) == checkRepeats.end())
            {
                result[0].push_back(p1);
                checkRepeats.insert(p1);
            }

            if (losers[p2] == 1)
                result[1].push_back(p2);
        }

        std::sort(result[0].begin(), result[0].end());
        std::sort(result[1].begin(), result[1].end());

        return result;
	}
};

int main()
{
	Solution Test;

	std::vector<std::vector<int>> matchesTest1 = { {1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9} };
	Test.findWinners(matchesTest1);
	std::vector<std::vector<int>> matchesTest2 = { {2, 3}, {1, 3}, {5, 4}, {6, 4} };
	Test.findWinners(matchesTest2);

	std::cin.get();
	return 0;
}
