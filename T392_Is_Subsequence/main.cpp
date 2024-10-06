#include <iostream>

class Solution
{
public:
    bool isSubsequence(std::string s, std::string t)
    {
        int i = 0;
        int j = 0;

        while (i < s.length() && j < t.length())
        {
            if (s[i] == t[j])
                i++;

            j++;
        }

        if (i == s.length())
            return true;
        else
            return false;
    }
};

int main()
{
    Solution Test;

    std::string sTest1 = "abc";
    std::string tTest1 = "ahbgdc";
    std::cout << Test.isSubsequence(sTest1, tTest1) << std::endl;
    std::string sTest2 = "axc";
    std::string tTest2 = "ahbgdc";
    std::cout << Test.isSubsequence(sTest2, tTest2) << std::endl;

    std::cin.get();
    return 0;
}
