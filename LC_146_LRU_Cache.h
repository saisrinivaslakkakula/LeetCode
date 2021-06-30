//
// Created by sai srinivas lakkakula on 6/20/21.
//

#ifndef LETTCODE_LC_146_LRU_CACHE_H
#define LETTCODE_LC_146_LRU_CACHE_H
#include "unordered_map"
using std::unordered_map;
class LRUCache {
public:
    LRUCache(int capacity);
    int get(int key) ;
    void put(int key, int value);


private:
    unordered_map<int,int> umap;
    int maxCap;
    int lastKey;
};
#endif //LETTCODE_LC_146_LRU_CACHE_H
