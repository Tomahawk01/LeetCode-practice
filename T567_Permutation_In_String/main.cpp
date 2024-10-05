#include <iostream>
#include <algorithm>

class Solution
{
public:
	bool checkInclusion(std::string s1, std::string s2)
	{
		sort(s1.begin(), s1.end());
		for (int i = 0; i < s2.size() - s1.size(); i++)
		{
			std::string sub = s2.substr(i, s1.size());
			sort(sub.begin(), sub.end());
			if (sub == s1)
				return true;
		}

		return false;
	}
};

int main()
{
	Solution Test;

	std::string s1Test1 = "ab";
	std::string s2Test1 = "eidbaooo";
	std::cout << Test.checkInclusion(s1Test1, s2Test1) << std::endl;
	std::string s1Test2 = "ab";
	std::string s2Test2 = "eidboaoo";
	std::cout << Test.checkInclusion(s1Test2, s2Test2) << std::endl;

	std::cin.get();
	return 0;
}
