#include <iostream>
#include <vector>

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::vector<int> Result;

		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
					return Result = {i, j};

				std::cout << i << ", " << j << std::endl;
			}
		}

		return Result;
	}
};

int main()
{
	Solution Test;

	std::vector<int> numsTest1 = { 2, 7, 11, 15 };
	Test.twoSum(numsTest1, 9);
	std::vector<int> numsTest2 = { 3, 2, 4 };
	Test.twoSum(numsTest2, 6);
	std::vector<int> numsTest3 = { 3, 3 };
	Test.twoSum(numsTest3, 6);

	std::cin.get();
	return 0;
}