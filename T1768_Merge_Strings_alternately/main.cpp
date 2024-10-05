#include <iostream>

class Solution
{
public:
	std::string mergeAlternately(std::string word1, std::string word2)
	{
		std::string Result = "";

		for (int i = 0; i < word1.length() || i < word2.length(); i++)
		{
			if (i < word1.length())
				Result += word1[i];
			if (i < word2.length())
				Result += word2[i];
		}

		return Result;
	}
};

int main()
{
	Solution Test;

	std::string word1Test1 = "abc", word2Test1 = "pqr";
	std::cout << Test.mergeAlternately(word1Test1, word2Test1) << std::endl;
	std::string word1Test2 = "ab", word2Test2 = "pqrs";
	std::cout << Test.mergeAlternately(word1Test2, word2Test2) << std::endl;
	std::string word1Test3 = "abcd", word2Test3 = "pq";
	std::cout << Test.mergeAlternately(word1Test3, word2Test3) << std::endl;

	std::cin.get();
	return 0;
}
