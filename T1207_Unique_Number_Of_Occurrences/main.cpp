#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

class Solution
{
public:
    bool uniqueOccurrences(std::vector<int>& arr)
    {
        std::unordered_map<int, int> frequencyMap;
        std::unordered_set<int> occurrences;

        for (int n : arr)
        {
            frequencyMap[n]++;
        }

        for (auto& entry : frequencyMap)
        {
            if (!occurrences.insert(entry.second).second)
                return false;
        }

        return true;
    }
};

int main()
{
    Solution Test;

    std::vector<int> arrTest1 = { 1, 2, 2, 1, 1, 3 };
    std::cout << Test.uniqueOccurrences(arrTest1) << std::endl;
    std::vector<int> arrTest2 = { 1, 2 };
    std::cout << Test.uniqueOccurrences(arrTest2) << std::endl;
    std::vector<int> arrTest3 = { -3, 0, 1, -3, 1, 1, 1, -3, 10, 0 };
    std::cout << Test.uniqueOccurrences(arrTest3) << std::endl;

    std::cin.get();
    return 0;
}
