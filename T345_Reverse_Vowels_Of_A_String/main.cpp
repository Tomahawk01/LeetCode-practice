#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
	std::string reverseVowels(std::string s)
	{
		std::vector<char> temp;
		std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

		for (char c : s)
		{
			if (std::ranges::find(vowels, c) != vowels.end())
				temp.emplace_back(c);
		}

		std::reverse(temp.begin(), temp.end());

		for (int i = 0; i < s.length(); i++)
		{
			if (std::ranges::find(vowels, s[i]) != vowels.end())
			{
				s[i] = temp[0];
				temp.erase(temp.begin(), temp.begin() + 1);
			}
		}

		return s;
	}
};

int main()
{
	Solution Test;

	std::string sTest1 = "IceCreAm";
	std::cout << Test.reverseVowels(sTest1) << std::endl;
	std::string sTest2 = "leetcode";
	std::cout << Test.reverseVowels(sTest2) << std::endl;

	std::cin.get();
	return 0;
}
