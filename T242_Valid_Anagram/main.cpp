#include <iostream>
#include <unordered_map>

class Solution
{
public:
	bool isAnagram(std::string s, std::string t)
	{
		if (s.empty() || t.empty())
			return false;
		if (s.length() != t.length())
			return false;

		std::unordered_map<char, int> count;

		for (char c_s : s)
		{
			count[c_s]++;
		}
		for (char c_t : t)
		{
			count[c_t]--;
		}

		for (auto elem : count)
		{
			if (elem.second != 0)
				return false;
		}

		return true;
	}
};

int main()
{
	Solution Test;

	std::string Case1Str1 = "anagram", Case1Str2 = "nagaram";
	std::cout << Test.isAnagram(Case1Str1, Case1Str2) << std::endl;
	std::string Case2Str1 = "rat", Case2Str2 = "car";
	std::cout << Test.isAnagram(Case2Str1, Case2Str2) << std::endl;

	std::cin.get();
	return 0;
}