#include <iostream>

class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode* deleteMiddle(ListNode* head)
    {
        if (!head || !head->next)
            return nullptr;

        int count = 0;
        ListNode* current = head;
        while (current)
        {
            count++;
            current = current->next;
        }

        int middleIndex = count / 2;

        current = head;
        for (int i = 0; i < middleIndex - 1; i++)
        {
            current = current->next;
        }

        ListNode* middleNode = current->next;
        current->next = middleNode->next;

        return head;
    }
};

int main()
{
    Solution Test;
    // 1, 3, 4, 7, 1, 2, 6
    ListNode* headTest1 = new ListNode(1);
    headTest1->next = new ListNode(3);
    headTest1->next->next = new ListNode(4);
    headTest1->next->next->next = new ListNode(7);
    headTest1->next->next->next->next = new ListNode(1);
    headTest1->next->next->next->next->next = new ListNode(2);
    headTest1->next->next->next->next->next->next = new ListNode(6);
    ListNode* Test1Result = Test.deleteMiddle(headTest1);
    ListNode* current = Test1Result;
    while (current)
    {
        std::cout << current->val << " ";
        current = current->next;
    }

    std::cin.get();
    return 0;
}
