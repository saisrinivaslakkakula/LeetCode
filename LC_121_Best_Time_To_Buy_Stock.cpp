//
// Created by sai srinivas lakkakula on 6/20/21.
//
#include "LC_121_Best_Time_To_Buy_Stock.h"
#include <iostream>
/*
 * In an array, Find atmost minimum and atmost maximum followed by it.
 * To do this analyse array as graph
 * Get the minimum by comparing current minimum with stored min. if current min < storedmin, storedmin = currnet min
 * so profit is value at anypoint  - stored min > stored profit
 * since we trverse array from start to end, the timing is also taken care automatically
 * */
int maxProfit(vector<int>& prices) {
   int maxpeak = 0;
   int  minpeak = INT32_MAX;
   for(int price : prices){
       if(price < minpeak)
           maxpeak = price;
       else if(price-minpeak > maxpeak)
           maxpeak = price - minpeak;
   }
    return (maxpeak);




}

