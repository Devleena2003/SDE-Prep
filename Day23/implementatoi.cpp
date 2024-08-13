int myAtoi(string s)
{
    long long int ans = 0;
    int i = 0;
    int sign = 0;
    while (s[i] == ' ')
        i++;
    if (s[i] == '+')
    {
        sign = 0;
        i++;
    }
    else if (s[i] == '-')
    {
        sign = 1;
        i++;
    }
    while (s[i] == '0')
        i++;
    while (s[i] >= '0' && s[i] <= '9')
    {
        if (ans > INT_MAX)
        {
            if (sign)
                return INT_MIN; // sign==1
            return INT_MAX;     // sign==0
        }
        ans = ans * 10 + s[i] - '0';
        i++;
    }
    if (sign)
        ans *= -1;
    if (ans > INT_MAX)
        return INT_MAX;
    if (ans < INT_MIN)
        return INT_MIN;

    return (int)ans;
}