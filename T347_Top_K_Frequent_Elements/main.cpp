#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

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
	std::vector<int> topKFrequent(std::vector<int>& nums, int k)
	{
		std::unordered_map<int, int> count;
		for (int num : nums)
		{
			count[num]++;
		}

		std::vector<std::pair<int, int>> sorted(count.begin(), count.end());
		sort(sorted.begin(), sorted.end(),
			 [](const std::pair<int, int>& a, const std::pair<int, int>& b)
			 {
					 return a.second > b.second;
			 }
		);

		std::vector<int> result;
		for (int i = 0; i < k && i < sorted.size(); i++)
		{
			result.emplace_back(sorted[i].first);
		}

		std::cout << result << std::endl;

		return result;
	}
};

int main()
{
	Solution Test;

	std::vector<int> numsTest1 = { 1, 1, 1, 2, 2, 3 };
	Test.topKFrequent(numsTest1, 2);
	std::vector<int> numsTest2 = { 1 };
	Test.topKFrequent(numsTest2, 1);

	std::cin.get();
	return 0;
}
