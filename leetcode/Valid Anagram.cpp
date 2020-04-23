//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        int S[256] = {0};
        int T[256] = {0};

        for (auto i : s)
        {
            S[i]++;
        }
        for (auto i : t)
        {
            T[i]++;
        }

        for (auto i : t)
        {
            if (S[i] != T[i])
            {
                return false;
            }
        }
        return true;
    }
};