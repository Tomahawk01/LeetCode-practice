#include <iostream>
#include <numeric>

class Solution
{
public:
	std::string gcdOfStrings(std::string str1, std::string str2)
	{
		if (str1 + str2 == str2 + str1)
			return str1.substr(0, std::gcd(str1.length(), str2.length()));
		else
			return "";
	}
};

int main()
{
	Solution Test;

	std::string string1Test1 = "ABCABC", string2Test1 = "ABC";
	std::cout << Test.gcdOfStrings(string1Test1, string2Test1) << std::endl;
	std::string string1Test2 = "ABABAB", string2Test2 = "ABAB";
	std::cout << Test.gcdOfStrings(string1Test2, string2Test2) << std::endl;
	std::string string1Test3 = "LEET", string2Test3 = "CODE";
	std::cout << Test.gcdOfStrings(string1Test3, string2Test3) << std::endl;

	std::cin.get();
	return 0;
}
