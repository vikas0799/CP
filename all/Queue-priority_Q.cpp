#include <bits/stdc++.h>
using namespace std;
int main()
{
//   priority_queue<int, vector<int>, greater<int>> pq;
//min heap or max heap is pq->priority_queue
    queue<int> q;
    q.push(23);
    q.push(200);
    q.push(400);
    queue<int> temp = q;
    cout << temp.front() << endl; // 23
    cout << temp.back() << endl;  // 400
    temp.pop();                   // remove 23 from front side
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
}