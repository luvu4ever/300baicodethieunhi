

int maxProfit(int* prices, int pricesSize){
    int ans = 0;
    int buy = prices[0];
    for(int i=0; i<pricesSize; i++){
        if(prices[i] < buy)
            buy = prices[i];
        if(prices[i] - buy > ans)
            ans = prices[i] - buy;
    }
    return ans;
}