#include <iostream>
#include <vector>
#include <set>

class Solution
{
public:
    std::vector<std::vector<int>> findDifference(std::vector<int>& nums1, std::vector<int>& nums2)
    {
        std::set<int> set1(nums1.begin(), nums1.end());
        std::set<int> set2(nums2.begin(), nums2.end());

        std::vector<int> distinctNums1;
        std::vector<int> distinctNums2;

        for (int n : set1)
        {
            if (set2.find(n) == set2.end())
            {
                distinctNums1.emplace_back(n);
            }
        }

        for (int n : set2)
        {
            if (set1.find(n) == set1.end())
            {
                distinctNums2.emplace_back(n);
            }
        }

        return { distinctNums1, distinctNums2 };
    }
};

int main()
{
    Solution Test;

    std::vector<int> nums1Test1 = { 1, 2, 3 };
    std::vector<int> nums2Test1 = { 2, 4, 6 };
    std::vector<std::vector<int>> printTest1 = Test.findDifference(nums1Test1, nums2Test1);
    for (int n : printTest1[0])
    {
        std::cout << n << " ";
    }
    std::cout << ", ";
    for (int n : printTest1[1])
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::vector<int> nums1Test2 = { 1, 2, 3, 3 };
    std::vector<int> nums2Test2 = { 1, 1, 2, 2 };
    std::vector<std::vector<int>> printTest2 = Test.findDifference(nums1Test2, nums2Test2);
    for (int n : printTest2[0])
    {
        std::cout << n << " ";
    }
    std::cout << ", ";
    for (int n : printTest2[1])
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cin.get();
    return 0;
}
