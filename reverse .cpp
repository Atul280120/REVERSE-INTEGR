    int reverseNum(int x)
{
    string s = to_string(x);
    reverse(s.begin(), s.end());
        x = stoll(s);
    return x;
}
