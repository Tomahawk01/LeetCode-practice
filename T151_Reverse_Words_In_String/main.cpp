#include <iostream>

class Solution
{
public:
	std::string reverseWords(std::string s)
	{
		std::string result;
		std::string temp;

		for (int i = 0; i < s.length();)
		{
			temp = "";

			while (s[i] != ' ' && i < s.length())
			{
				temp += s[i];
				i++;
			}

			while (s[i] == ' ' && i < s.length())
				i++;

			if (!temp.empty())
			{
				if (result.empty())
					result += temp;
				else
					result = temp + ' ' + result;
			}
		}

		return result;
	}
};

int main()
{
	Solution Test;

	std::string sTest1 = "the sky is blue";
	std::cout << Test.reverseWords(sTest1) << std::endl;
	std::string sTest2 = "  hello world  ";
	std::cout << Test.reverseWords(sTest2) << std::endl;
	std::string sTest3 = "a good   example";
	std::cout << Test.reverseWords(sTest3) << std::endl;

	std::cin.get();
	return 0;
}
