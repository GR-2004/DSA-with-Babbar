#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> minHeap;
    vector<int> arr = {53, 54, 52, 50, 55, 45};
    for (auto &&i : arr)
    {
        minHeap.push(i);
    }
    vector<int> ans;
    int size = minHeap.size();
    while (!minHeap.empty())
    {
        ans.push_back(minHeap.top());
        minHeap.pop();
    }
    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}