#include <iostream>
#include <vector>

class Solution
{
public:
	int removeElement(std::vector<int>& nums, int val)
	{
		int index = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != val)
			{
				nums[index] = nums[i];
				index++;
			}
		}

		return index;
	}
};

int main()
{
	Solution Test;

	std::vector<int> numsTest1 = { 3, 2, 2, 3 };
	std::cout << Test.removeElement(numsTest1, 3) << std::endl;
	std::vector<int> numsTest2 = { 0, 1, 2, 2, 3, 0, 4, 2 };
	std::cout << Test.removeElement(numsTest2, 2) << std::endl;

	std::cin.get();
	return 0;
}
