#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

class Solution
{
public:
    bool closeStrings(std::string word1, std::string word2)
    {
        if (word1.size() != word2.size())
            return false;

        std::unordered_map<char, int> freq1, freq2;
        for (char c : word1)
        {
            freq1[c]++;
        }
        for (char c : word2)
        {
            freq2[c]++;
        }

		std::set<char> set1(word1.begin(), word1.end());
        std::set<char> set2(word2.begin(), word2.end());
		if (set1 != set2)
			return false;

        std::vector<int> count1, count2;
        for (auto& [ch, count] : freq1)
        {
            count1.push_back(count);
        }
        for (auto& [ch, count] : freq2)
        {
            count2.push_back(count);
        }

        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());

        return count1 == count2;
    }
};

int main()
{
    Solution Test;

    std::string word1Test1 = "abc";
    std::string word2Test1 = "bca";
    std::cout << Test.closeStrings(word1Test1, word2Test1) << std::endl;
    std::string word1Test2 = "a";
    std::string word2Test2 = "aa";
    std::cout << Test.closeStrings(word1Test2, word2Test2) << std::endl;
    std::string word1Test3 = "cabbba";
    std::string word2Test3 = "abbccc";
    std::cout << Test.closeStrings(word1Test3, word2Test3) << std::endl;

    std::cin.get();
    return 0;
}
