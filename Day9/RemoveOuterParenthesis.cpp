class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int count = 0;
        string result = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {

                if (count > 0)
                {
                    result += s[i]; // it's not the outermost parenthesis
                }
                count++;
            }

            else
            {
                count--;
                if (count > 0)
                    result += s[i];
            }
        }

        return result;
    }
};