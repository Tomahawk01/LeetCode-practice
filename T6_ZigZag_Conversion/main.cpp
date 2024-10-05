#include <iostream>
#include <vector>

class Solution
{
public:
	std::string convert(std::string s, int numRows)
	{
		if (numRows == 1)
			return s;

		std::string Result;

		int n = s.size();
		int CharactersInSection = 2 * (numRows - 1);
		for (int Row = 0; Row < numRows; Row++)
		{
			int Index = Row;
			while (Index < n)
			{
				Result += s[Index];
				if (Row != 0 && Row != numRows - 1)
				{
					int CharacterInBetween = CharactersInSection - 2 * Row;
					int SecondIndex = Index + CharacterInBetween;
					if (SecondIndex < n)
						Result += s[SecondIndex];
				}
				Index += CharactersInSection;
			}
		}

		return Result;
	}
};

int main()
{
	Solution TestCase;

	std::cout << TestCase.convert("PAYPALISHIRING", 3) << std::endl;
	std::cout << TestCase.convert("PAYPALISHIRING", 4) << std::endl;
	std::cout << TestCase.convert("A", 1) << std::endl;

	std::cin.get();
	return 0;
}
