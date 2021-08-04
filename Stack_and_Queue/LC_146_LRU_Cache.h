//
// Created by sai srinivas lakkakula on 7/25/21.
//

#ifndef LETTCODE_LC_146_LRU_CACHE_H
#define LETTCODE_LC_146_LRU_CACHE_H
#include <unordered_map>
#include <queue>
#include <stack>
using std::unordered_map;
using std::queue;
using std::stack;
class LC_146_LRU_Cache {
public:
    LC_146_LRU_Cache(int capacity) {
            LRU_cache.reserve(capacity);
            this->capacity = capacity;
    }

    int get(int key) {
        auto it = LRU_cache.find(key);
        if(it!=LRU_cache.end()){
            if(it->first == lastUsed.front()){
                lastUsed.pop();
                lastUsed.push(it->first);
            }
            return it->second;

        }

        else
            return -1;
    }

    void put(int key, int value) {
            if(this->LRU_cache.size()<capacity){
                auto it = LRU_cache.find(key);
                if(it!=LRU_cache.end()){
                    if(lastUsed.front() == key){
                        lastUsed.pop();
                        lastUsed.push(key);
                    }
                    LRU_cache[key] = value;
                }
                else{
                    LRU_cache[key] = value;
                    lastUsed.push(key);
                }
            }
            else{
                auto it = LRU_cache.find(key);
                if(it!=LRU_cache.end()){
                    if(lastUsed.front() == key){
                        lastUsed.pop();
                        lastUsed.push(key);
                    }
                    LRU_cache[key] = value;
                }
                else{
                    int lastUsedKey = lastUsed.front();
                    LRU_cache.erase(lastUsedKey);
                    LRU_cache[key] = value;
                    lastUsed.pop();
                    lastUsed.push(key);
                }

            }
    }

private:
    int capacity;
    unordered_map<int,int> LRU_cache;
    queue<int> lastUsed;
};


#endif //LETTCODE_LC_146_LRU_CACHE_H
