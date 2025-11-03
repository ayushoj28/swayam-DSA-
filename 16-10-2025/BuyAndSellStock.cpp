class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int pr=prices[0];
      int max_profit=INT_MIN;
      for(int p:prices){
        if(p<pr){
            pr=p;
        }
        else{
            int profit=p-pr;
            max_profit=max(max_profit,profit);
        }
      }
      return max_profit;
    }
};
