/*

122. Best Time to Buy and Sell Stock II
Easy

Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

Example 1:

Input: [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
             Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.

Example 2:

Input: [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
             Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are
             engaging multiple transactions at the same time. You must sell before buying again.

Example 3:

Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.



*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1])
                profit+=prices[i]-prices[i-1];
            
        }
        
        return profit;
        
        
        
    }
};

/*

Complexity Analysis

    Time complexity : O(n) Single pass.

    Space complexity: O(1) Constant space needed.


Approach 2: Peak Valley Approach

Algorithm

Say the given array is:

[7, 1, 5, 3, 6, 4].

If we plot the numbers of the given array on a graph, we get:

Profit Graph

If we analyze the graph, we notice that the points of interest are the consecutive valleys and peaks.

Mathematically speaking: TotalProfit=∑i(height(peaki)−height(valleyi)) Total Profit= \sum_{i}(height(peak_i)-height(valley_i)) TotalProfit=∑i​(height(peaki​)−height(valleyi​))

The key point is we need to consider every peak immediately following a valley to maximize the profit. In case we skip one of the peaks (trying to obtain more profit), we will end up losing the profit over one of the transactions leading to an overall lesser profit.

For example, in the above case, if we skip peakipeak_ipeaki​ and valleyjvalley_jvalleyj​ trying to obtain more profit by considering points with more difference in heights, the net profit obtained will always be lesser than the one obtained by including them, since CCC will always be lesser than A+BA+BA+B.

omplexity Analysis

    Time complexity : O(n). Single pass.

    Space complexity : O(1). Constant space required.

Approach 3: Simple One Pass

Algorithm

This solution follows the logic used in Approach 2 itself, but with only a slight variation. In this case, instead of looking for every peak following a valley, we can simply go on crawling over the slope and keep on adding the profit obtained from every consecutive transaction. In the end,we will be using the peaks and valleys effectively, but we need not track the costs corresponding to the peaks and valleys along with the maximum profit, but we can directly keep on adding the difference between the consecutive numbers of the array if the second number is larger than the first one, and at the total sum we obtain will be the maximum profit. This approach will simplify the solution. This can be made clearer by taking this example:


https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/solution/

*/