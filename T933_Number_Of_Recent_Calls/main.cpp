#include <iostream>
#include <queue>

class RecentCounter
{
public:
    RecentCounter() {}

    int ping(int t)
    {
        m_Requests.push(t);

        while (m_Requests.front() < t - 3000)
            m_Requests.pop();

        return m_Requests.size();
    }

private:
    std::queue<int> m_Requests;
};

int main()
{
    RecentCounter* counter = new RecentCounter();

    std::cout << counter->ping(1) << std::endl;
    std::cout << counter->ping(100) << std::endl;
    std::cout << counter->ping(3001) << std::endl;
    std::cout << counter->ping(3002) << std::endl;
    
    std::cin.get();
    delete counter;
    return 0;
}
