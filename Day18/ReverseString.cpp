string reverseWords(string s)
{
    // code here
    stack<string> st;
    string ans = "";
    string word = "";
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            if (!word.empty())
            {
                st.push(word); // pqr
                word = "";
            }
        }
        else
            word += s[i]; // pqr mno
    }
    if (!word.empty())
        st.push(word); // mno pqr

    while (st.size() != 1)
    {
        ans += st.top() + "."; // mno.
        st.pop();
    }
    ans += st.top(); // pqr
    return ans;      // mno.pqr
}