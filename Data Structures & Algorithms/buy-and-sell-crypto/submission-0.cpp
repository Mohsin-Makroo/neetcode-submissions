class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=prices[0];
        int profit=0,maxP=0;
        for(int x:prices){
            if(x>price) profit=x-price;
            else{
                price=x;
            }
            maxP=max(maxP,profit);
        }
        return maxP;
    }
};
