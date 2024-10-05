#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
	bool canPlaceFlowers(std::vector<int>& flowerbed, int n)
	{
		int capacity = flowerbed.size();
		int counter = 0;
		for (int i = 0; i < capacity; i++)
		{
			if (flowerbed[i] == 0)
			{
				if (flowerbed[std::max(0, i - 1)] == 0 &&
					flowerbed[std::min(capacity - 1, i + 1)] == 0)
				{
					flowerbed[i] = 1;
					counter++;
				}
			}
			else
				continue;
		}

		if (counter >= n)
			return true;
		else
			return false;

		return false;
	}
};

int main()
{
	Solution Test;

	std::vector<int> flowerbedTest1 = { 1, 0, 0, 0, 1 };
	std::cout << Test.canPlaceFlowers(flowerbedTest1, 1) << std::endl;
	std::vector<int> flowerbedTest2 = { 1, 0, 0, 0, 1 };
	std::cout << Test.canPlaceFlowers(flowerbedTest2, 2) << std::endl;

	std::cin.get();
	return 0;
}
