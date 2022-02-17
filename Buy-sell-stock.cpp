#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=prices[0],min=prices[0];
        int profit=0,great;
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                max=prices[i];
                min=prices[i];
            }
            else if(min<prices[i])
            {
                max=prices[i];
            }
             great=max-min;
            if(great>profit)
                profit=great;
        }
        return profit;
    }
};
