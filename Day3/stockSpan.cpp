int next(int price)
{
    stack<pair<int, int>> s;
    int span = 1;
    while (!s.empty() && s.top().first <= price)
    {
        span += s.top().second;
        s.pop();
    }

    s.push({price, span});

    return span;
}