#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution
{
public:
	std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs)
	{
		std::unordered_map<std::string, std::vector<std::string>> Map;

		for (std::string str : strs)
		{
			std::string Word = str;
			std::sort(Word.begin(), Word.end());
			Map[Word].push_back(str);
		}

		std::vector<std::vector<std::string>> Result;
		for (auto v : Map)
			Result.push_back(v.second);

		return Result;
	}
};

int main()
{
	Solution Test;

	std::vector<std::string> strsTest1 = { "eat","tea","tan","ate","nat","bat" };
	Test.groupAnagrams(strsTest1);
	std::vector<std::string> strsTest2 = { "" };
	Test.groupAnagrams(strsTest2);
	std::vector<std::string> strsTest3 = { "a" };
	Test.groupAnagrams(strsTest3);

	std::cin.get();
	return 0;
}