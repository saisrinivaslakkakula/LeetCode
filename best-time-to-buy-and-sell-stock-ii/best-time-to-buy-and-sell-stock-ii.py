class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        acc_profit = 0
        cur_profit = 0
        min_price = float('inf')
        for price in prices:
            min_price = min(min_price,price)
            if price-min_price > cur_profit: cur_profit = price-min_price
            elif price-min_price < cur_profit:
                acc_profit +=cur_profit
                cur_profit = 0
                min_price = price
        return cur_profit+acc_profit

        