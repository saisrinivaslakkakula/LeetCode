//
// Created by sai srinivas lakkakula on 6/29/21.
//
#include "LC_937_Reorder_Log_Files.h"

vector<string> reorderLogFiles(vector<string>& logs){
    std::multimap<string,string > letterlogs;
    vector <string > digitlogs;
    vector<string> sortedlogs;
    std::multimap<string,string> temp;
    for(string log: logs){
        string value = log.substr(log.find(" ")+1,log.length());
        string key = log.substr(0,log.find(" "));
        if(isdigit(value.at(0)))
            digitlogs.push_back(log);
        else
            letterlogs.insert(std::pair<string,string>(key,value));
    }
    for(auto it : letterlogs){
        temp.insert({it.second,it.first});
    }
    for (auto i : temp)
        sortedlogs.push_back(i.second+" "+i.first);
    for(auto i: digitlogs)
        sortedlogs.push_back(i);
    for(string sortedlog: sortedlogs )
        std::cout<<sortedlog<<std::endl;
    return sortedlogs ;
}

