//
// Created by sai srinivas lakkakula on 6/20/21.
//
#include "LC_146_LRU_Cache.h"
LRUCache::LRUCache(int capacity) {
    umap.reserve(capacity);
    maxCap = capacity;
    lastKey = -1;
}

void LRUCache::put(int key, int value) {
   if(umap.size() < maxCap){
       umap[key] = value;
       lastKey = key;
   }
   else{
       umap.erase(lastKey);
       umap[key] = value;
       lastKey = key;
   }
}

int LRUCache::get(int key) {
    if (umap.find(key)!=umap.end())
        return umap.at(key);
    else
        return -1;
}


