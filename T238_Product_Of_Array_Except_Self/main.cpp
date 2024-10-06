#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums)
    {
        std::vector<int> answer(nums.size(), 1);

        for (int i = 1; i < nums.size(); i++)
        {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            suffix *= nums[i + 1];
            answer[i] *= suffix;
        }

        return answer;
    }
};

int main()
{
    Solution Test;

    std::vector<int> numsTest1 = { 1, 2, 3, 4 };
    Test.productExceptSelf(numsTest1);
    std::vector<int> numsTest2 = { -1, 1, 0, -3, 3 };
    Test.productExceptSelf(numsTest2);

    std::cin.get();
    return 0;
}
