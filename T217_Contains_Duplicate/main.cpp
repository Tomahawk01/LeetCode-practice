#include <iostream>
#include <vector>
#include <set>

class Solution
{
public:
	bool containsDuplicate(std::vector<int>& nums)
	{
		std::set<int> temp_set;

		for (auto i : nums)
		{
			if (temp_set.find(i) != temp_set.end())
				return true;
			temp_set.insert(i);
		}
		return false;
	}
};

int main()
{
	Solution Test;

	std::vector<int> TestNums1{ 1, 2, 3, 1 };
	std::vector<int> TestNums2{ 1, 2, 3, 4 };
	std::vector<int> TestNums3{ 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 };
	std::cout << Test.containsDuplicate(TestNums1) << std::endl;
	std::cout << Test.containsDuplicate(TestNums2) << std::endl;
	std::cout << Test.containsDuplicate(TestNums3) << std::endl;

	std::cin.get();
	return 0;
}