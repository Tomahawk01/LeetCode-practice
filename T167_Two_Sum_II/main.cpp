#include <iostream>
#include <vector>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
	os << "[";
	for (typename std::vector<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
	{
		os << " " << *ii;
	}
	os << " ]";
	return os;
}

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& numbers, int target)
	{
		std::vector<int> result;
		int i = 0;
		int j = numbers.size() - 1;

		while (i < j)
		{
			int sum = numbers[i] + numbers[j];
			if (sum < target)
			{
				i++;
			}
			else if (sum > target)
			{
				j--;
			}
			else
			{
				result.emplace_back(i + 1);
				result.emplace_back(j + 1);
				break;
			}
		}

		std::cout << result << std::endl;

		return result;
	}
};

int main()
{
	Solution Test;

	std::vector<int> numsTest1 = { 2, 7, 11, 15 };
	Test.twoSum(numsTest1, 9);
	std::vector<int> numsTest2 = { 2, 3, 4 };
	Test.twoSum(numsTest2, 6);
	std::vector<int> numsTest3 = { -1, 0 };
	Test.twoSum(numsTest3, -1);

	std::cin.get();
	return 0;
}
