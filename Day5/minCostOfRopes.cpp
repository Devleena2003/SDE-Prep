long long minCost(long long arr[], long long n)
{
    // Your code here
    // min heap
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    long long cost = 0;
    long long sum;
    while (pq.size() > 1)
    {
        long long top1 = pq.top();
        pq.pop();
        long long top2 = pq.top();
        pq.pop();
        sum = top1 + top2;
        cost = cost + sum;
        pq.push(sum);
    }
    return cost;
}