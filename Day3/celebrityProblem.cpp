int celebrity(vector<vector<int>> &M, int n)
{
    // code here
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    while (st.size() != 1)
    {
        int A = st.top();
        st.pop();
        int B = st.top();
        st.pop();
        if (M[A][B] == 1) // A knows B means A is not celeb

            st.push(B);

        else
            st.push(A);
    }

    int ans = st.top();

    // verifying our ans

    for (int i = 0; i < n; i++)
    {
        // ans know anyone
        if (M[ans][i] == 1)
            return -1;

        // everyone doesnot knows ans

        if (i != ans)
        {
            if (M[i][ans] == 0)
                return -1;
        }
    }

    return ans;
}