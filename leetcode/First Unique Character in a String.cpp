//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/

class Solution
{
public:
    int firstUniqChar(string s)
    {

        int hm[256] = {0};

        for (auto i : s)
        {
            hm[i]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (hm[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

//using hashmap
/*

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> m;
        int idx = s.size();
        for (int i = 0; i < s.size(); i++) {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        for (auto &p : m) {
            if (p.second.first == 1) idx = min(idx, p.second.second);
        }
        return idx == s.size() ? -1 : idx;
    }
};
*/