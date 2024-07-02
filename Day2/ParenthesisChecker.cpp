bool ispar(string x)
{
    // Your code here

    // we are using a stack here

    stack<char> st;
    for (char ch : x)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }

        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.empty())
                return false;

            else
            {
                char top = st.top();
                st.pop();

                if (ch == ')' && top != '(' || ch == '}' && top != '{' || ch == ']' && top != '[')
                    return false;
            }
        }
    }

    return st.empty();
}