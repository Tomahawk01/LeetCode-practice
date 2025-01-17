#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Solution
{
public:
	std::vector<std::string> letterCombinations(std::string digits)
	{
		if (digits.empty())
			return {};

		std::vector<std::string> result{};

		std::unordered_map<char, std::string> mapButtons = {
			{'2', "abc"},
			{'3', "def"},
			{'4', "ghi"},
			{'5', "jkl"},
			{'6', "mno"},
			{'7', "pqrs"},
			{'8', "tuv"},
			{'9', "wxyz"}
		};

		std::string currentCombination{};
		Backtrack(digits, 0, mapButtons, currentCombination, result);

		return result;
	}

private:
	void Backtrack(
		const std::string& digits,
		int index,
		const std::unordered_map<char, std::string>& mapButtons,
		std::string& currentCombinations,
		std::vector<std::string>& result)
	{
		if (index == digits.size())
		{
			result.push_back(currentCombinations);
			return;
		}

		char digit = digits[index];
		const std::string& letters = mapButtons.at(digit);

		for (char letter : letters)
		{
			currentCombinations.push_back(letter);
			Backtrack(digits, index + 1, mapButtons, currentCombinations, result);
			currentCombinations.pop_back();
		}
	}
};

int main()
{
	Solution Test;

	std::string digitsTest1 = "23";
	std::string digitsTest2 = "";
	std::string digitsTest3 = "2";

	std::vector<std::string> res1 = Test.letterCombinations(digitsTest2);
	for (const auto& e : res1)
		std::cout << e << "";
	std::cout << std::endl;

	std::vector<std::string> res2 = Test.letterCombinations(digitsTest2);
	for (const auto& e : res2)
		std::cout << e << "";
	std::cout << std::endl;

	std::vector<std::string> res3 = Test.letterCombinations(digitsTest3);
	for (const auto& e : res3)
		std::cout << e << "";
	std::cout << std::endl;

	std::cin.get();
	return 0;
}
