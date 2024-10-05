#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies)
	{
		std::vector<bool> result;
		int highestValueInCandies = *std::max_element(candies.begin(), candies.end());

		for (int candy : candies)
		{
			if (candy + extraCandies >= highestValueInCandies)
				result.emplace_back(true);
			else
				result.emplace_back(false);
		}

		return result;
	}
};

int main()
{
	Solution Test;

	std::vector<int> candiesTest1 = { 2, 3, 5, 1, 3 };
	Test.kidsWithCandies(candiesTest1, 3);
	std::vector<int> candiesTest2 = { 4, 2, 1, 1, 2 };
	Test.kidsWithCandies(candiesTest2, 1);
	std::vector<int> candiesTest3 = { 12, 1, 12 };
	Test.kidsWithCandies(candiesTest3, 10);

	std::cin.get();
	return 0;
}
