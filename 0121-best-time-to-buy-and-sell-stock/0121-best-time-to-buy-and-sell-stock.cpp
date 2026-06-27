class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int a=prices[0];
       int maxi = 0;
       for(int i=1;i<prices.size();i++){
        if(prices[i]<a) a=prices[i];
            maxi = max(maxi,prices[i]-a);
       }
       return maxi;
    }
};