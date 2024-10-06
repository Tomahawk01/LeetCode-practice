#include <iostream>
#include <vector>

class Solution
{
public:
    int maxArea(std::vector<int>& height)
    {
        int result = 0;

        int left = 0;
        int right = height.size() - 1;

        while (left < right)
        {
            result = std::max(result, (right - left) * std::min(height[left], height[right]));

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return result;
    }
};

int main()
{
    Solution Test;

    std::vector<int> heightTest1 = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    std::cout << Test.maxArea(heightTest1) << std::endl;
    std::vector<int> heightTest2 = { 1, 1 };
    std::cout << Test.maxArea(heightTest2) << std::endl;

    std::cin.get();
    return 0;
}
