#include <iostream>
#include <vector>

class Solution
{
public:
	int search(std::vector<int>& nums, int target)
	{
		int low = 0;
		int high = nums.size() - 1;

		while (low <= high)
		{
			int middle = low + (high - low) / 2;
			if (nums[middle] < target)
				low = middle + 1;
			else if (nums[middle] > target)
				high = middle - 1;
			else
				return middle;
		}

		return -1;
	}
};

int main()
{
	Solution Test;

	std::vector<int> numsTest1 = { -1, 0, 3, 5, 9, 12 };
	Test.search(numsTest1, 9);	// 4
	std::vector<int> numsTest2 = { -1, 0, 3, 5, 9, 12 };
	Test.search(numsTest2, 2);	// -1

	std::cin.get();
	return 0;
}
