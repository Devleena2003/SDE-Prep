bool isRotated(string str1, string str2)
{
    // Your code here
    int len = str1.length();
    if (str1.length() != str2.length() || len <= 1)
    {
        return false;
    }

    string left = str1.substr(2) + str1.substr(0, 2);
    string right = str1.substr(len - 2) + str1.substr(0, len - 2);

    return (left == str2) || (right == str2);
}