// /https://leetcode.com/explore/learn/card/binary-search/125/template-i/950/

class Solution
{
public:
    int mySqrt(int x)
    {

        int low = 1, high = x;

        int mid;
        int target = floor(sqrt(x));
        //   cout<<target<<" ";
        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (mid == target)
            {

                return mid;
            }
            else if (mid < target)
            {
                low = mid + 1;
            }
            else
            {

                high = mid - 1;
            }
        }
        return 0;
    }
};