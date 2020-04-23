//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int start = 0, end = s.length() - 1;
        while (start < end)
        {
            if (!isalnum(s[start]))
                start++;
            else if (!isalnum(s[end]))
                end--;
            else
            {
                if (tolower(s[start++]) != tolower(s[end--]))
                    return false;
            }
        }
        return true;
    }
};