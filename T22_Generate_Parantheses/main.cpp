#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
	std::vector<std::string> generateParenthesis(int n)
	{
		std::vector<std::string> result;

		Backtrack(result, "", 0, 0, n);

		return result;
	}

private:
	void Backtrack(std::vector<std::string>& result, std::string current, int left, int right, int n)
	{
		if (current.size() == n * 2)
		{
			result.push_back(current);
			return;
		}

		if (left < n)
			Backtrack(result, current + '(', left + 1, right, n);

		if (right < left)
			Backtrack(result, current + ')', left, right + 1, n);
	}
};

int main()
{
	Solution Test;

	int n1 = 3;
	int n2 = 1;

	std::vector<std::string> res1 = Test.generateParenthesis(n1);
	for (const auto& e : res1)
		std::cout << e << "";
	std::cout << std::endl;

	std::vector<std::string> res2 = Test.generateParenthesis(n2);
	for (const auto& e : res2)
		std::cout << e << "";
	std::cout << std::endl;

	std::cin.get();
	return 0;
}
