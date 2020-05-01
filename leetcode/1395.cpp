//Count Number of Teams

//https://leetcode.com/problems/count-number-of-teams/

//https://leetcode.com/problems/count-number-of-teams/discuss/555196/C%2B%2B-solutions-O(n-3)-O(n-2)-and-O(nlogn)
class Solution
{
public:
    int numTeams(vector<int> &rating)
    {

        int n = rating.size();
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int xlesser = 0, xgreater = 0, ylesser = 0, ygreater = 0;
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                {
                    if (rating[i] < rating[j])
                    {
                        xgreater++;
                    }
                    else
                    { // no if since unique values
                        xlesser++;
                    }
                }
                else if (i > j)
                {

                    if (rating[i] < rating[j])
                    {
                        ylesser++;
                    }
                    else
                    { // no if since unique values

                        ygreater++;
                    }
                }
            }

            res += xgreater * ygreater + ylesser * xlesser;
        }
        return res;
    }
};