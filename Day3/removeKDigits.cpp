string removeKdigits(string num, int k)
{
    stack<char> st;
    for (char digit : num)
    {
        while (!st.empty() && k > 0 && st.top() > digit)
        {
            st.pop();
            k--;
        }
        st.push(digit);
    }

    while (k > 0 && !st.empty())
    {
        st.pop();
        k--;
    }

    string result = "";
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());
    size_t pos = result.find_first_not_of('0');
    result = (pos == std::string::npos) ? "0" : result.substr(pos);

    return result;
}